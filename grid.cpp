#include "grid.h"
#include <iostream>
#include "colors.h"

using namespace std;

Grid::Grid() {
  numRows = 20;
  numCols = 10;
  cellSize = 30;
  Initialise();
  Print();
  colors = GetCellColors();
}

void Grid::Initialise() {
  for (int i = 0; i < numRows; i++) {
    for (int j = 0; j < numCols; j++) {
      grid[i][j] = 0;
    }
  }
}

void Grid::Print() {
  for (int i = 0; i < numRows; i++) {
    for (int j = 0; j < numCols; j++) {
      cout << grid[i][j] << " ";
    }
    cout << endl;
  }
}

void Grid::Draw() {
  for (int i = 0; i < numRows; i++) {
    for (int j = 0; j < numCols; j++) {
      int cellValue = grid[i][j];
      DrawRectangle(j * cellSize + 1, i * cellSize + 1, cellSize - 1,
                    cellSize - 1, colors[cellValue]);
    }
  }
}