#include "block.h"

Block::Block()
{
    cellSize = 30;
    rotationState = 0;
    colors = GetCellColors();
}

void Block::Draw()
{
    std::vector<Position> tiles = cells[rotationState];
    for (Position item : tiles)
    {
        int x = item.column * cellSize + 1;
        int y = item.row * cellSize + 1;
        DrawRectangle(x, y, cellSize - 1, cellSize - 1, colors[id]);
    }
}