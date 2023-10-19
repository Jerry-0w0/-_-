#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5
#define MINES 5

void initializeBoard(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard(char board[SIZE][SIZE]) {
    printf("   0 1 2 3 4\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d  ", i);
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

void placeMines(char board[SIZE][SIZE]) {
    int minesPlaced = 0;
    srand(time(NULL));

    while (minesPlaced < MINES) {
        int row = rand() % SIZE;
        int col = rand() % SIZE;

        if (board[row][col] != '*') {
            board[row][col] = '*';
            minesPlaced++;
        }
    }
}

int countMinesAround(char board[SIZE][SIZE], int row, int col) {
    int count = 0;

    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int newRow = row + i;
            int newCol = col + j;

            if (newRow >= 0 && newRow < SIZE && newCol >= 0 && newCol < SIZE && board[newRow][newCol] == '*') {
                count++;
            }
        }
    }

    return count;
}

int main() {
    char board[SIZE][SIZE];
    initializeBoard(board);
    placeMines(board);

    printf("Welcome to Minesweeper!\n");

    // Calculate and display mine counts
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] != '*') {
                int count = countMinesAround(board, i, j);
                if (count > 0) {
                    board[i][j] = count + '0'; // Convert count to character
                }
            }
        }
    }

    printBoard(board);

    return 0;
}

