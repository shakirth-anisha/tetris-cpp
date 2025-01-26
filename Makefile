# Compiler and flags
CC := g++
CFLAGS := -std=c++11
LDFLAGS := -lm -lpthread -ldl
SRC := main.cpp grid.cpp colors.cpp position.cpp block.cpp blocks.cpp
OUT := main

# Default raylib paths
RAYLIB_INCLUDE_DEFAULT := /usr/local/include
RAYLIB_LIB_DEFAULT := /usr/local/lib

# Platform detection
ifeq ($(OS),Windows_NT)
	# Windows
	PLATFORM := Windows
	RAYLIB_INCLUDE := $(if $(RAYLIB_HOME),$(RAYLIB_HOME)\include,C:\raylib\include)
	RAYLIB_LIB := $(if $(RAYLIB_HOME),$(RAYLIB_HOME)\lib,C:\raylib\lib)
	LDFLAGS += -lraylib
	RM := del /Q
else
	UNAME_S := $(shell uname -s)
	ifeq ($(UNAME_S),Linux)
		# Linux
		PLATFORM := Linux
		RAYLIB_INCLUDE := $(RAYLIB_INCLUDE_DEFAULT)
		RAYLIB_LIB := $(RAYLIB_LIB_DEFAULT)
		LDFLAGS += -lraylib
		RM := rm -f
	else ifeq ($(UNAME_S),Darwin)
		# macOS
		PLATFORM := macOS
		RAYLIB_INCLUDE := /opt/homebrew/opt/raylib/include
		RAYLIB_LIB := /opt/homebrew/opt/raylib/lib
		LDFLAGS += -lraylib
		RM := rm -f
	endif
endif

# Default target
all: $(OUT)

# Build target
$(OUT): $(SRC)
	$(CC) $(SRC) -o $(OUT) $(CFLAGS) -I$(RAYLIB_INCLUDE) -L$(RAYLIB_LIB) $(LDFLAGS)

# Clean target
clean:
	$(RM) $(OUT)

# Debug target
debug: CFLAGS += -g -DDEBUG
debug: $(OUT)

# Release target
release: CFLAGS += -O3 -DNDEBUG
release: $(OUT)

# Help target
help:
	@echo "Makefile for Tetris game"
	@echo "Detected Platform: $(PLATFORM)"
	@echo "Raylib include path: $(RAYLIB_INCLUDE)"
	@echo "Raylib library path: $(RAYLIB_LIB)"
	@echo "Available targets:"
	@echo "  all      - Build the project"
	@echo "  debug    - Build the project with debugging symbols"
	@echo "  release  - Build the project with optimizations"
	@echo "  clean    - Remove the output file"
	@echo "Environment variables:"
	@echo "  RAYLIB_HOME (optional) - Path to raylib installation"

.PHONY: all clean debug release help
