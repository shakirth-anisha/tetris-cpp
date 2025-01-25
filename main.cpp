#include <raylib.h>
#include <vector>
#include <cstdlib>
#include <ctime>

int main(){
    InitWindow(300, 600, "raylib tetris");
    SetTargetFPS(60);
while (WindowShouldClose() == false) {
    BeginDrawing();
    
    EndDrawing();
}


    CloseWindow();
    return 0;
}
