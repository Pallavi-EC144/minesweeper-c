#ifndef MINESWEEPER_GAME_H
#define MINESWEEPER_GAME_H

#include <stdbool.h>

#define SIZE 9
#define MINES 10

// Color codes
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
// ... other color definitions

// Function declarations
void initializeGame();
void printWelcomeBanner();
void printGameBoard();
bool getPlayerMove(int *row, int *col);
void revealCell(int row, int col);
bool hasWon();
void gameOver();
void victory();

#endif // MINESWEEPER_GAME_H