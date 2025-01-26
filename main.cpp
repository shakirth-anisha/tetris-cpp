#include <raylib.h>
#include "blocks.cpp"
#include "grid.h"

int main() {
  Color darkBlue = {23, 36, 50, 255};
  InitWindow(300, 600, "raylib tetris");
  SetTargetFPS(60);

  Grid grid = Grid();
  grid.Print();

  LBlock block;

  while (WindowShouldClose() == false) {
    BeginDrawing();
    ClearBackground(darkBlue);
    grid.Draw();
    block.Draw();
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
