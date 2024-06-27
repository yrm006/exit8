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
    Texture2D tile[4];{
        tile[0] = LoadTexture("tile0.png");
        tile[1] = LoadTexture("tile1.png");
        tile[2] = LoadTexture("tile2.png");
        tile[3] = LoadTexture("tile3.png");
        tile[4] = LoadTexture("tile4.png");
        tile[5] = LoadTexture("tile5.png");
        tile[6] = LoadTexture("tile6.png");
        tile[7] = LoadTexture("tile7.png");
        tile[8] = LoadTexture("tile8.png");
        tile[9] = LoadTexture("tile9.png");
        tile[10] = LoadTexture("tile10.png");
        tile[11] = LoadTexture("tile11.png");
        tile[12] = LoadTexture("tile12.png");
        tile[13] = LoadTexture("tile13.png");
        tile[14] = LoadTexture("tile14.png");
        tile[15] = LoadTexture("tile15.png");
        tile[16] = LoadTexture("tile16.png");
        tile[17] = LoadTexture("tile17.png");
        tile[18] = LoadTexture("tile18.png");
        tile[19] = LoadTexture("tile19.png");
        tile[20] = LoadTexture("tile20.png");
        tile[21] = LoadTexture("tile21.png");
        tile[22] = LoadTexture("tile22.png");
        tile[23] = LoadTexture("tile23.png");
        tile[24] = LoadTexture("tile24.png");
        tile[25] = LoadTexture("tile25.png");
        tile[26] = LoadTexture("tile26.png");
        tile[27] = LoadTexture("tile27.png");
        tile[28] = LoadTexture("tile28.png");
        tile[29] = LoadTexture("tile29.png");
        tile[30] = LoadTexture("tile30.png");
        tile[31] = LoadTexture("tile31.png");
        tile[32] = LoadTexture("tile32.png");
        tile[33] = LoadTexture("tile33.png");
        tile[34] = LoadTexture("tile34.png");
        tile[35] = LoadTexture("tile35.png");
        tile[36] = LoadTexture("tile36.png");
        tile[37] = LoadTexture("tile37.png");
    }

    // Texture2D tilei = LoadTexture("tile0i.png");
    Texture2D tilei[4];{
        tilei[0] = LoadTexture("tile0i.png");
        tilei[1] = LoadTexture("tile1i.png");
        tilei[2] = LoadTexture("tile2i.png");
        tilei[3] = LoadTexture("tile3i.png");
        tilei[4] = LoadTexture("tile4i.png");
        tilei[5] = LoadTexture("tile5i.png");
        tilei[6] = LoadTexture("tile6i.png");
        tilei[7] = LoadTexture("tile7i.png");
        tilei[8] = LoadTexture("tile8i.png");
        tilei[9] = LoadTexture("tile9i.png");
        tilei[10] = LoadTexture("tile10i.png");
        tilei[11] = LoadTexture("tile11i.png");
        tilei[12] = LoadTexture("tile12i.png");
        tilei[13] = LoadTexture("tile13i.png");
        tilei[14] = LoadTexture("tile14i.png");
        tilei[15] = LoadTexture("tile15i.png");
        tilei[16] = LoadTexture("tile16i.png");
        tilei[17] = LoadTexture("tile17i.png");
        tilei[18] = LoadTexture("tile18i.png");
        tilei[19] = LoadTexture("tile19i.png");
        tilei[20] = LoadTexture("tile20i.png");
        tilei[21] = LoadTexture("tile21i.png");
        tilei[22] = LoadTexture("tile22i.png");
        tilei[23] = LoadTexture("tile23i.png");
        tilei[24] = LoadTexture("tile24i.png");
        tilei[25] = LoadTexture("tile25i.png");
        tilei[26] = LoadTexture("tile26i.png");
        tilei[27] = LoadTexture("tile27i.png");
        tilei[28] = LoadTexture("tile28i.png");
        tilei[29] = LoadTexture("tile29i.png");
        tilei[30] = LoadTexture("tile30i.png");
        tilei[31] = LoadTexture("tile31i.png");
        tilei[32] = LoadTexture("tile32i.png");
        tilei[33] = LoadTexture("tile33i.png");
        tilei[34] = LoadTexture("tile34i.png");
        tilei[35] = LoadTexture("tile35i.png");
        tilei[36] = LoadTexture("tile36i.png");
        tilei[37] = LoadTexture("tile37i.png");
    }

    char* ten[4];{
        ten[0] = "5 ten";
        ten[1] = "30 ten";
        ten[2] = "100 ten!!!";
        ten[3] = "80 ten!!!";
        ten[4] = "10 ten!!!";
        ten[5] = "10 ten!!!";
        ten[6] = "10 ten!!!";
        ten[7] = "10 ten!!!";
        ten[8] = "10 ten!!!";
        ten[9] = "10 ten!!!";
        ten[10] = "10 ten!!!";
        ten[11] = "10 ten!!!";
        ten[12] = "10 ten!!!";
        ten[13] = "10 ten!!!";
        ten[14] = "10 ten!!!";
        ten[15] = "10 ten!!!";
        ten[16] = "10 ten!!!";
        ten[17] = "10 ten!!!";
        ten[18] = "10 ten!!!";
        ten[19] = "10 ten!!!";
        ten[20] = "10 ten!!!";
        ten[21] = "10 ten!!!";
        ten[22] = "10 ten!!!";
        ten[23] = "10 ten!!!";
        ten[24] = "10 ten!!!";
        ten[25] = "10 ten!!!";
        ten[26] = "10 ten!!!";
        ten[27] = "10 ten!!!";
        ten[28] = "10 ten!!!";
        ten[29] = "10 ten!!!";
        ten[30] = "10 ten!!!";
        ten[31] = "10 ten!!!";
        ten[32] = "10 ten!!!";
        ten[33] = "10 ten!!!";
        ten[34] = "10 ten!!!";
        ten[35] = "10 ten!!!";
        ten[36] = "10 ten!!!";
        ten[37] = "10 ten!!!";
    }

    Texture2D goalimg = LoadTexture("goal.png");

    SetTargetFPS(60);

    int tno = 0;
    int ihen = 0;
    int goal = 0;
    int modori = 0;

    while (!WindowShouldClose())
    {
        if( IsKeyPressed(KEY_UP) ){
            tno = tno + 1;

            if( 3 < tno ){
                tno = 0;
            }

            if(modori < 0){
                ihen = 0;
            }else
            if(tno == 0){
                ihen = (rand()%5 == 0);
            }else
            if(tno == 1){
                ihen = (rand()%30 == 0);
            }else
            if(tno == 2){
                ihen = (rand()%100 == 0);
            }else
            if(tno == 3){
                ihen = (rand()%80 == 0);
            }else{
                ihen = 0;
            }

            if(0 < ++modori) modori = 0;
        }
        if( IsKeyPressed(KEY_DOWN) ){
            if( ihen ){
                goal = 1;
            }else{
                tno = tno - 1;

                if( tno < 0 ){
                    tno = 3;
                }
            }

            --modori;
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