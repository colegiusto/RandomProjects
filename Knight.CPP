// Online C++ compiler to run C++ program online
#include <iostream>
bool placeKnight(int r, int c, int board[8][8], int step)
{
    if(step == 64)
    {
        return true;
    }
    if(r < 0 || c < 0 || r > 7 || c > 7 || board[r][c] != -1)
    {
        return false;
    }
    board[r][c] = step;
    if(placeKnight(r+2, c+1, board, step+1)||
    placeKnight(r+2, c-1, board, step+1)||
    placeKnight(r+1, c+2, board, step+1)||
    placeKnight(r+1, c-2, board, step+1)||
    placeKnight(r-1, c+2, board, step+1)||
    placeKnight(r-1, c-2, board, step+1)||
    placeKnight(r-2, c+1, board, step+1)||
    placeKnight(r-2, c-1, board, step+1))
    {
        return true;
    }
    board[r][c] = -1;
    return false;
    
}

int main() {
    // Write C++ code here
    
    int board[8][8];
    board[7][7] = 0;
    for(int i = 0; i < 8; ++i)
    {
        for(int j = 0; i < 8; ++j)
        {
            board[i][j] = -1;
        }
    }
    
    std::cout << placeKnight(0,0,board,0);
    
    return 0;
}

