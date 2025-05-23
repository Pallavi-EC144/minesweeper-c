#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

int main() {
    srand(time(NULL));
    initializeGame();
    
    printWelcomeBanner();

    while (1) {
        printGameBoard();

        int row, col;
        if (!getPlayerMove(&row, &col)) {
            continue;
        }

        if (mineBoard[row][col] == 'M') {
            gameOver();
            break;
        }

        revealCell(row, col);

        if (hasWon()) {
            victory();
            break;
        }
    }

    return 0;
}