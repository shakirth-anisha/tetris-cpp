#pragma once
#include <raylib.h>
#include <vector>

extern const Color stormyBlue;
extern const Color midnightAqua;
extern const Color darkSeaGreen;
extern const Color charcoalGray;
extern const Color seafoamDark;
extern const Color darkCoral;
extern const Color thunderGray;
extern const Color blackenedYellow;

std::vector<Color> GetCellColors();
Color GetBackgroundColor();