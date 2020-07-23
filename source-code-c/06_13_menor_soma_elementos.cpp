/***************************************************************************************
 *  Programa que mostra o menor elementos e a soma dos elementos de uma matriz         *
 ***************************************************************************************/

#include <stdio.h>   
#include <stdlib.h> 

#define MAX 100  /* tamanho máximo que este programa permitirá para as dimensões da matriz */

void le_matriz(int[][MAX], int, int);
void imprime_matriz(int[][MAX], int, int);              /* PROTÓTIPOS DAS FUNÇÕES*/   
int  menor_elemento_matriz (int[][MAX], int, int);
void  posicao_menor_elemento_matriz (int[][MAX], int, int, int[]);
int  soma_elementos_matriz(int[][MAX], int, int);

int main() {
    int matriz[MAX][MAX], linhas, colunas, posicao_i_j[2];
    
    printf("Programa que mostra o menor elementos e a soma dos elementos de uma matriz:\n\n");

    /*Lê dimensão da matriz MxN */
    printf("\nQual o numero de linhas da matriz(maximo %d)? ", MAX);
    scanf("%d",&linhas); 
    printf("\nQual o numero de colunas da matriz(maximo %d)? ", MAX);
    scanf("%d",&colunas);
    
    le_matriz(matriz, linhas, colunas);
    imprime_matriz(matriz, linhas, colunas);

    printf("\nMenor elemento eh %d\n", menor_elemento_matriz(matriz, linhas, colunas));
    posicao_menor_elemento_matriz (matriz, linhas, colunas, posicao_i_j);
    printf("\nPosicao do menor elemento: linha = %d e coluna = %d\n", posicao_i_j[0], posicao_i_j[1]);
    printf("\nSoma dos elementos eh %d\n", soma_elementos_matriz(matriz, linhas, colunas));
     
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
       
    printf("\n\nMatriz\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d  ", mat[i][j]);
        printf("\n");
    }
    return;
} 
    
int  menor_elemento_matriz(int mat[][MAX], int m, int n) {
    int i, j, menor;
       
    menor = mat[0][0];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (mat[i][j] < menor)
                menor = mat[i][j];   
    return menor;
}   

/* Esta função usa o array posicao[] para retornar dois valores */
void  posicao_menor_elemento_matriz(int mat[][MAX], int m, int n, int posicao[]) {
    int i, j, menor;
       
    menor = mat[0][0];
    posicao[0] = 0;
    posicao[1] = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (mat[i][j] < menor) {
                menor = mat[i][j];   
                posicao[0] = i;
                posicao[1] = j;
            }
    return;
}
    
int  soma_elementos_matriz(int mat[][MAX], int m, int n) {
    int i, j, soma;
       
    soma = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            soma += mat[i][j];  
    return soma;
}                               
