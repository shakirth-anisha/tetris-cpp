#include <raylib.h>

#include "grid.h"

int main() {
  Color darkBlue = {23, 36, 50, 255};
  InitWindow(300, 600, "raylib tetris");
  SetTargetFPS(60);

  Grid grid = Grid();
  grid.Print();

  while (WindowShouldClose() == false) {
    BeginDrawing();
    ClearBackground(darkBlue);
    grid.Draw();
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
