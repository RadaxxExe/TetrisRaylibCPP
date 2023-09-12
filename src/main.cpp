#include <raylib.h>

#include "grid.h"
#include "block.h"
#include "blocks.cpp"

int targetFPS = 165;

int main()
{
    Color darkBlue = {44, 44, 127, 255};

    InitWindow(300, 600, "Raylib Tetris");
    SetTargetFPS(targetFPS);

    Grid grid = Grid();
    grid.Print();

    // JBlock block = JBlock();
    // LBlock block = LBlock();
    // SBlock block = SBlock();
    // TBlock block = TBlock();
    // IBlock block = IBlock();
    // OBlock block = OBlock();
    // ZBlock block = ZBlock();

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(darkBlue);

        grid.Draw();
        block.Draw();

        EndDrawing();
    }

    CloseWindow();
}