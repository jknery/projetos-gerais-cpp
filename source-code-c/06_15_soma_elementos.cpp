/********************************************************************
 *  Programa que lê, implime uma matriz e a manipula como um array  *
 *  para somar seus elementos                                       *
 ********************************************************************/

#include <stdio.h>   
#include <stdlib.h> 

#define QUANT_LIN 2  /* quantidade de linhas da matriz */
#define QUANT_COL 3  /* quantidade de colunas da matriz */

void le_matriz(int[][QUANT_COL], int, int);
void imprime_matriz(int[][QUANT_COL], int, int);
int  soma_elementos_matriz(int[], int, int);

int main() {
    int matriz[QUANT_LIN][QUANT_COL], num_linhas, num_colunas, linha, coluna;
    
    printf("Programa que soma os elementos de uma matriz tratando-a como"
           " um array linear para somar seuas elementos:\n\n");

    printf("Informe os %d elementos da matriz:\n", QUANT_LIN * QUANT_COL);
    le_matriz(matriz, QUANT_LIN, QUANT_COL);
    imprime_matriz(matriz, QUANT_LIN, QUANT_COL);
    
    /* Imprime somatório dos elementos da matriz, tratando-a como um array linear.
       Passa o endereço da primeira linha e trata as demais linhas como continuação
       de um array */
    printf("\nO somatorio dos elementos da matriz eh %d\n", soma_elementos_matriz(matriz[0], QUANT_LIN, QUANT_COL));
     
    /* finaliza programa */
    printf ("\n\n");
    system ("pause");
    return 0;
}

void le_matriz(int mat[][QUANT_COL], int m, int n) {
    int i, j;
       
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            printf("\nElemento [%d][%d]: ", i, j);
            scanf("%d",&mat[i][j]);
        }    
    return;
}   
    
void imprime_matriz(int mat[][QUANT_COL], int m, int n) {
    int i, j;
       
    printf("\n\nMatriz\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d  ", mat[i][j]);
        printf("\n");
    }
    return;
}

/* Recebe o endereço da primeira linha do array e trata esta linha como um array
   de QUANT_LIN * QUANT_COL elementos */
int  soma_elementos_matriz(int array[], int m, int n) {
    int indice, soma = 0;
       
    for (indice = 0; indice < QUANT_LIN * QUANT_COL; indice++)
        soma += array[indice];
    return soma;
}                               
