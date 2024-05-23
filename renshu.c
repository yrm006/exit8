//% cc renshu.c libraylib.a -framework IOKit -framework Cocoa
#include "raylib.h"
#include <stdlib.h>

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - keyboard input");

    Vector2 ballPosition = { (float)screenWidth/2-100, (float)screenHeight/2-100 };

    //Texture2D txtr = LoadTexture("otama.png");
    Texture2D tile[3];{
        tile[0] = LoadTexture("tile0.png");
        tile[1] = LoadTexture("tile1.png");
        tile[2] = LoadTexture("tile2.png");
    }

    // Texture2D tilei = LoadTexture("tile0i.png");
    Texture2D tilei[3];{
        tilei[0] = LoadTexture("tile0i.png");
        tilei[1] = LoadTexture("tile1i.png");
        tilei[2] = LoadTexture("tile2i.png");
    }

    char* ten[3];{
        ten[0] = "5 ten";
        ten[1] = "30 ten";
        ten[2] = "100 ten!!!";
    }

    Texture2D goalimg = LoadTexture("goal.png");

    SetTargetFPS(60);

    int tno = 0;
    int ihen = 0;
    int goal = 0;

    while (!WindowShouldClose())
    {
        if( IsKeyPressed(KEY_UP) ){
            tno = tno + 1;

            if( 2 < tno ){
                tno = 0;
            }

            if(tno == 0){
                ihen = (rand()%5 == 0);
            }else
            if(tno == 1){
                ihen = (rand()%30 == 0);
            }else
            if(tno == 2){
                ihen = (rand()%100 == 0);
            }else{
                ihen = 0;
            }
        }
        if( IsKeyPressed(KEY_DOWN) ){
            if( ihen ){
                goal = 1;
            }else{
                tno = tno - 1;

                if( tno < 0 ){
                    tno = 2;
                }
            }

        }

        BeginDrawing();

            if( goal ){
                DrawTextureV(goalimg, ballPosition, WHITE);

                DrawText(ten[tno], 400, 400, 50, BLUE);
            }else
            if( ihen ){
                DrawTextureV(tilei[tno], ballPosition, WHITE);
            }else{
                DrawTextureV(tile[tno], ballPosition, WHITE);
            }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}