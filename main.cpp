#include <raylib.h>
#include "blocks.cpp"
#include "colors.h"
#include "grid.h"

int main() {
  Color darkBlue = GetBackgroundColor();
  InitWindow(300, 600, "raylib tetris");
  SetTargetFPS(60);

  Grid grid = Grid();
  grid.Print();

  ZBlock block = ZBlock();

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
