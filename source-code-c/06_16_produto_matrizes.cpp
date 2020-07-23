/*******************************************************************************
 *  Programa que lê duas matrizes A[m, n] e B[n, p], gera a matriz produto, P, *
 *  e imprime as três matrizes: A, B e P                                       *
 *******************************************************************************/

#include <stdio.h>   
#include <stdlib.h> 

#define MAX 10 

void le_matriz(int[][MAX], int, int);
void imprime_matriz(int[][MAX], int, int);

void produto_matrizes(int[][MAX], int[][MAX], int[][MAX], int, int, int);

int main (){
    int matA[MAX][MAX], matB[MAX][MAX], matP[MAX][MAX], m, n, p;
    
    printf("Programa que le duas matrizes, gera a matriz produto e imprime as tres matrizes:\n\n");

    printf("\nDigite a dimensao das matrizes a serem multiplicadas:A[m,n] e B[n,p]:");
    printf("\n  m: ");    
    scanf("%d",&m);    
    printf("\n  n: ");
    scanf("%d",&n);
    printf("\n  p: ");
    scanf("%d",&p);
        
    printf("\nLeitura da Matriz A");    
    le_matriz(matA, m, n);
    printf("\n\nLeitura da Matriz B");  
    le_matriz(matB, n, p);
    
    produto_matrizes(matA, matB, matP, m, n, p);    
    
    system("cls");
    printf("Matriz A\n");
    imprime_matriz(matA,  m, n);
    printf("\n\nMatriz B\n");  
    imprime_matriz(matB,  n, p);
    printf("\n\nMatriz Produto\n"); 
    imprime_matriz(matP,  n, p);  
      
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
            scanf("%d", &mat[i][j]);
        }    
    return;
}   
    
void imprime_matriz(int mat[][MAX], int m, int n) {
    int i, j;
       
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d  ", mat[i][j]);
        printf("\n");
    }
    return;
}

void produto_matrizes(int A[][MAX], int B[][MAX], int P[][MAX], 
                      int num_linA, int num_colA, int num_colB) { 
     int i, j, k;
     /* O num_colA = num_linB */
     for (i = 0; i < num_linA; i++)
         for (j = 0; j < num_colB; j++) {
             P[i][j] = 0;
             for (k = 0; k < num_colA; k++)                  
                 P[i][j] = P[i][j] +  A[i][k] * B[k][j]; 
         }
     return;
} 
