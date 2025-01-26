#include "colors.h"
#include <vector>

const Color gridBackground = {191, 219, 255, 255};  // Pastel light blue ~ grid
const Color pastelPurple = {186, 141, 255, 255};    // Pastel Purple
const Color pastelBlue = {153, 204, 255, 255};      // Pastel Blue
const Color pastelLavender = {217, 183, 255, 255};  // Pastel Lavender
const Color softPink = {255, 182, 193, 255};        // Soft Pastel Pink
const Color icyBlue = {173, 216, 230, 255};         // Icy Pastel Blue
const Color pastelLilac = {218, 162, 255, 255};     // Pastel Lilac
const Color palePurple = {204, 153, 255, 255};      // Pale Pastel Purple

// Background Color: Black
const Color backgroundColor = {0, 0, 0, 255};  // Black Background

std::vector<Color> GetCellColors() {
  return {gridBackground, pastelPurple, pastelBlue, pastelLavender, softPink, icyBlue, pastelLilac, palePurple};
}

Color GetBackgroundColor() {
  return backgroundColor;
}
