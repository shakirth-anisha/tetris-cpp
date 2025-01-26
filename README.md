# Tetris Game

## Overview
This is a C++ implementation of the classic Tetris game, built using the Raylib graphics library. It features a simple and intuitive design, providing an enjoyable gaming experience.

---

## Features
- **Classic Gameplay**: Traditional Tetris mechanics with falling blocks, line clears, and increasing difficulty.
- **Smooth Graphics**: Utilizes Raylib for clean and efficient rendering.
- **Responsive Controls**: Easy-to-use controls for a seamless gaming experience.
- **Dynamic Grid**: Fully functional Tetris grid implemented using C++ classes.

---

## Requirements
- **Compiler**: `g++` (or any C++ compiler supporting C++11).
- **Raylib Library**: Ensure Raylib is installed on your system. Installation instructions can be found [here](https://www.raylib.com/).
- **Development Environment**: Works on macOS, Linux, and Windows.

---

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/shakirth-anisha/tetris-cpp.git
   cd tetris
   ```

2. Install Raylib:
   Follow the instructions for your platform from the [Raylib official website](https://www.raylib.com/).

3. Build the project:
   ```bash
   make
   ```

4. Run the game:
   ```bash
   ./main
   ```

---

## File Structure
```
.
├── Makefile
├── README.md
├── block.cpp
├── block.h
├── blocks.cpp
├── colors.cpp
├── colors.h
├── grid.cpp
├── grid.h
├── main
├── main.cpp
├── position.cpp
└── position.h
```
- **Makefile**: Automates the build process.
- **block.cpp & block.h**: Implements individual Tetris block logic.
- **blocks.cpp**: Manages collections of Tetris blocks.
- **colors.cpp & colors.h**: Defines color schemes for the game.
- **grid.cpp & grid.h**: Implements the Tetris grid logic.
- **position.cpp & position.h**: Handles block positioning and movement.
- **main.cpp**: Contains the main game loop and rendering logic.

---

## Controls
- **Arrow Keys**: Move the Tetrimino left, right, or down.
- **Spacebar**: Instantly drop the Tetrimino.
- **Escape**: Exit the game.

---

## Customization
You can customize the game by:
- Modifying block colors and shapes in the `blocks.cpp` and `colors.cpp` files.
- Adjusting grid dimensions or speed settings in `main.cpp`.

---

## Contribute, Collaborate, and Change
Feel free to contribute to the project! Fork the repository, make your changes, and submit a pull request. Your ideas and enhancements are welcome.

---