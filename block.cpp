#include "block.h"
#include <iostream>
#include "colors.h"

using namespace std;

Block::Block() {
  cellSize = 30;
  rotationState = 0;
  colors = GetCellColors();
}
