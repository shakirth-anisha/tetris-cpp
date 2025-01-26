CC = g++
CFLAGS = -I/opt/homebrew/opt/raylib/include -L/opt/homebrew/opt/raylib/lib -lm -lpthread -ldl -std=c++11
LIBS = -lraylib

SRC = main.cpp grid.cpp colors.cpp position.cpp block.cpp blocks.cpp
OUT = main

$(OUT): $(SRC)
	$(CC) $(SRC) -o $(OUT) $(CFLAGS) $(LIBS)

clean:
	rm -f $(OUT)
