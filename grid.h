#pragma once
#include <raylib.h>
#include <vector>

using namespace std;
class Grid {
 private:
  int numRows;
  int numCols;
  int cellSize;
  vector<Color> colors;

 public:
  Grid();
  void Initialise();
  void Print();
  void Draw();
  int grid[20][10];
};