#pragma once

class Grid {
 private:
  int numRows;
  int numCols;
  int cellSize;

 public:
  Grid();
  void Initialise();
  void Print();
  int grid[20][10];
};