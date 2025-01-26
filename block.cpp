#include "block.h"
#include <iostream>
#include <vector>
#include "colors.h"

using namespace std;

Block::Block() {
  cellSize = 30;
  rotationState = 0;
  colors = GetCellColors();
}

void Block::Draw() {
  vector<Position> tiles = cells[rotationState];
  for (Position item : tiles) {
    DrawRectangle(item.col * cellSize + 1, item.row * cellSize + 1, cellSize - 1, cellSize - 1, colors[id]);
  }
}