/*******************************************************************************
*  Programa que lê duas matrizes quadradas [MxM], A e B, gera a matris soma, S,*
*  e imprime as três matrizes: A, B e S                                        *
*******************************************************************************/

#include <stdio.h>   
#include <stdlib.h> 

#define MAX 10 

void le_matriz(int[][MAX], int, int);
void imprime_matriz(int[][MAX], int, int);

void soma_matriz(int[][MAX], int[][MAX], int[][MAX], int, int);

int main() {
    int matA[MAX][MAX], matB[MAX][MAX], matS[MAX][MAX], m;
    
    printf("Programa que le duas matrizes quadradas MxM,"
           " gera a matris soma e imprime as tres matrizes:\n\n");
    
    printf("\nQual a dimensao das matrizes quadradas(maximo %d)? ", MAX);
    scanf("%d",&m);    

    printf("\nLeitura da Matriz A");    
    le_matriz(matA, m, m);
    printf("\n\nLeitura da Matriz B");  
    le_matriz(matB, m, m);
    
    soma_matriz(matA, matB, matS, m, m);    
    
    system("cls");
    printf("Matriz A\n");
    imprime_matriz(matA,  m, m);
    printf("\n\nMatriz B\n");  
    imprime_matriz(matB,  m, m);
    printf("\n\nMatriz Soma\n"); 
    imprime_matriz(matS,  m, m);   
      
    /* finaliza programa */
    printf ("\n\n");
    system ("pause");
    return 0;
}

void le_matriz(int mat[][MAX],int m, int n) {
    int i, j;
       
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            printf("\nElemento [%d][%d]: ", i, j);
            scanf("%d",&mat[i][j]);
        }    
    return;
}   
    
void imprime_matriz(int mat[][MAX], int m, int n) {
    int i, j;
      
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%4d  ", mat[i][j]);
        printf("\n");
    }
    return;
}

void soma_matriz(int A[][MAX], int B[][MAX], int S[][MAX], 
                 int m, int n) { 
    int i, j;
       
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            S[i][j] = A[i][j] + B[i][j];                  
    return;
} 
