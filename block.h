#pragma once
#include <iostream>
#include <map>
#include <vector>
#include "colors.h"
#include "position.h"

using namespace std;

class Block {
 private:
  int cellSize;
  int rotationState;
  vector<Color> colors;

 public:
  Block();
  int id;
  map<int, vector<Position>> cells;
};