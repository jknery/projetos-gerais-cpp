/*****************************************************************************
 *  Programa que manipula arrays de duas dimensões - matrizes                *
 *****************************************************************************/

#include <stdio.h>   
#include <stdlib.h> 

#define TAMANHO_MAX 100

void le_matriz(int[][TAMANHO_MAX], int, int);
void imprime_matriz(int[][TAMANHO_MAX], int, int);

int main() {
    int matriz[TAMANHO_MAX][TAMANHO_MAX], linhas, colunas;
    
    printf("Programa que manipula array de duas dimensoes - le e mostra matriz\n\n");

    printf("\nQual o numero de linhas da matriz? ");
    scanf("%d", &linhas);
    printf("\nQual o numero de colunas da matriz? ");
    scanf("%d", &colunas);
    
    le_matriz(matriz, linhas, colunas);
    imprime_matriz(matriz, linhas, colunas);;
 
    /* finaliza programa */
    printf ("\n\n");
    system ("pause");
    return 0;
}

void le_matriz(int mat[][TAMANHO_MAX], int m, int n) {
    int i, j;
       
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            printf("\nElemento [%d][%d]: ", i, j);
            scanf("%d",&mat[i][j]);
        }    
       
    return;
}   
    
void imprime_matriz(int mat[][TAMANHO_MAX], int m, int n) {
    int i, j;
       
    printf("\n\nMatriz\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%4d  ", mat[i][j]);
        printf("\n");
    }
    return;
}   
