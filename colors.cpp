#include "colors.h"
#include <vector>

// Define the colors with RGBA values
const Color stormyBlue = {0, 51, 102, 255};        // Stormy Blue
const Color midnightAqua = {0, 102, 153, 255};     // Midnight Aqua
const Color darkSeaGreen = {0, 77, 64, 255};       // Dark Sea Green
const Color charcoalGray = {54, 69, 79, 255};      // Charcoal Gray
const Color seafoamDark = {31, 63, 51, 255};       // Seafoam Dark
const Color darkCoral = {128, 41, 41, 255};        // Dark Coral
const Color thunderGray = {112, 128, 144, 255};    // Thunder Gray
const Color blackenedYellow = {102, 102, 0, 255};  // Blackened Yellow

std::vector<Color> GetCellColors() {
  return {stormyBlue,  midnightAqua, darkSeaGreen, charcoalGray,
          seafoamDark, darkCoral,    thunderGray,  blackenedYellow};