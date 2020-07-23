/****************************************************************************************
 *  Exerc�cio usando arrays: Uso de Fun��es: passando array bidimensional por par�metro *
 *     (Este programa � similar ao programa da fig. 6.22; p�g 197 do livro do Deitel)   *  
 ****************************************************************************************/

#include <stdio.h>   
#include <stdlib.h> 

#define MAX 100  /* tamanho m�ximo que este programa permitir� para as dimens�es da matriz */

void le_matriz(int[][MAX], int, int);
void imprime_matriz(int[][MAX], int, int);              /* PROT�TIPOS DAS FUN��ES*/   
int  soma_linha_matriz (int[], int);
int  soma_coluna_matriz(int[][MAX], int, int);

int main() {
    int matriz[MAX][MAX], num_linhas, num_colunas, linha, coluna;
    
    printf("Programa que faz o somat�rio das linhas e das colunas de uma matriz:\n\n");
    
    printf("\nQual o numero de linhas da matriz(maximo %d)? ", MAX);
    scanf("%d",&num_linhas);   
    printf("\nQual o numero de colunas da matriz(maximo %d)? ", MAX);
    scanf("%d",&num_colunas);
    
    le_matriz(matriz, num_linhas, num_colunas);
    imprime_matriz(matriz, num_linhas, num_colunas);
    
    /* Imprime somat�rio de cada linha da matriz */
    for (linha=0; linha < num_linhas; linha++)
        printf("\nO somatorio da linha %d eh %d\n", linha, soma_linha_matriz(matriz[linha], num_colunas));
        
    /* Imprime somat�rio de cada coluna da matriz */
    for (coluna=0; coluna < num_colunas; coluna++)
        printf("\nO somatorio da coluna %d eh %d\n", coluna, soma_coluna_matriz(matriz, coluna, num_linhas));

    /* finaliza programa */
    printf ("\n\n");
    system ("pause");
    return 0;
}

void le_matriz(int mat[][MAX], int m, int n) {
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
    
int  soma_linha_matriz(int lin_mat[], int num_colunas) {
    int col, soma = 0; /* s� precisa receber a linha a ser somada*/
       
    for (col = 0; col < num_colunas; col++)
        soma += lin_mat[col];  
    return soma;
}                        
    
int  soma_coluna_matriz(int mat[][MAX], int coluna, int num_linhas) {
    int i, soma = 0;  /* precisa receber toda matriz; pois, para se ter acesso aos elementos 
                         de uma coluna � necess�rio acessar todas as linhas da matriz*/                               
    for (i = 0; i < num_linhas; i++)
        soma += mat[i][coluna];  
    return soma;
}                                   
