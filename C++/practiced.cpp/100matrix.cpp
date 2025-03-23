#include <stdio.h>

#define SIZE 100

int main() {
    int matrix[SIZE][SIZE];

    // Initializing the matrix with values from 1 to 10000
    int value = 1;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = value++;
        }
    }

    // Printing the matrix
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%5d ", matrix[i][j]);  // Adjusting spacing for alignment
        }
        printf("\n");
    }

    return 0;
}
