#pragma once

#include "grid.h"

#include "blocks.cpp"

class Game
{
public:
    Game();
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    Grid grid;
    void HandleInput();
    void Draw();
    void MoveBlockLeft();
    void MoveBlockRight();
    void MoveBlockDown();

private:
    bool IsBlockOutside();
    bool BlockFits();
    void RotateBlock();
    void LockBlock();

    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
};