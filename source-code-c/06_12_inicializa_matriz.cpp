/*********************************************************************************
 *  Programa que inicializa e imprime uma matriz 3x4                             *
 *********************************************************************************/

#include <stdio.h>   
#include <stdlib.h>

#define NUMERO_LINHAS 3
#define NUMERO_COLUNAS 4

void imprime_matriz(int[][NUMERO_COLUNAS], int, int);

int main() {
    /* Os elementos da matriz que não forem inicializados, recebem zero */
    int matriz[NUMERO_LINHAS][NUMERO_COLUNAS]= {{1, 2, 3, 4}, {5, 6}, {9, 10, 11, 12}};

    printf("Programa que inicializa e imprime uma matriz %dx%d:\n\n", NUMERO_LINHAS, NUMERO_COLUNAS);
    
    imprime_matriz(matriz, NUMERO_LINHAS, NUMERO_COLUNAS);

    /* finaliza programa */
    printf ("\n\n");
    system ("pause");
    return 0;
}

void imprime_matriz(int mat[][NUMERO_COLUNAS], int m, int n) {
    int i, j;
       
    printf("Matriz:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%4d  ", mat[i][j]);
        printf("\n");
    }
    return;
}   

