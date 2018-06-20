#include <stdio.h>
#include <stdlib.h>

int ** generate_matrix(int rows, int columns){
    int **matrix = malloc(sizeof(int *) * rows);

    if (matrix) {
        for (int row=0; row<rows; row++) {
            matrix[row] = malloc(sizeof(int) * columns);
        }
    } else {
        return NULL;
    }

    return matrix;
}

int main () {
    int rows = 3;
    int columns = 4;
    int **matrix = generate_matrix(rows, columns);

    if (matrix) {
        // Populate the matrix.
        for (int i=0; i<rows; i++) {
            for (int j=0; j<columns; j++) {
                printf("Insira um valor para a linha %d, coluna %d: ", i+1, j+1);
                scanf("%d", &matrix[i][j]);
            }
            printf("\n");
        }

        for (int j=0; j<columns; j++) {
            int soma_coluna = 0;
            for (int i=0; i<rows; i++) {
                soma_coluna += matrix[i][j];
            }
            printf("Soma da coluna %d: %d\n", j+1, soma_coluna);
        }

        free(matrix);
        return 0;
    } else {
        return 1;
    }

}
