/*****************************************************************************
 *  Programa para ordenar os elementos de uma array                          *
 *****************************************************************************/

#include <stdio.h>   
#include <stdlib.h> 
#include <math.h>

#define TAMANHO_MAX 10000 

void le_array(int[], int);
void imprime_array (int [], int);  
void ordena_array (int [], int); 

int main() {
    int array_num [TAMANHO_MAX], tamanho;

    printf("Este programa le um array e ordena seus elementos na ordem crescente, aplicando o "
           "metodo Bubble Sort (ordenacao de bolhas)\n\n");
       
    printf("\nDigite o tamanho do array a ser lido (maximo %d): ", TAMANHO_MAX);
    scanf("%d",&tamanho);
    
    le_array(array_num, tamanho);
    imprime_array (array_num, tamanho);  
    ordena_array (array_num, tamanho); 
    imprime_array (array_num, tamanho); 
        
    /* finaliza programa */
    printf ("\n\n");
    system ("pause");
    return 0;
}

void le_array(int array[], int tam) {
    int ind;

    for (ind = 0; ind < tam; ind++) {
        printf("\nElemento %d: ", ind);
        scanf("%d",&array[ind]);
    }
    return;
}   
    
void imprime_array(int array[], int tam) {
    int ind;

    printf("\n\nElementos do array: ");
    for (ind = 0; ind < tam; ind++)
        printf("%d ", array[ind]);
    return;
}      

void ordena_array(int array[], int tamanho) {
    int passo, ind, aux;

    for (passo = 1; passo < tamanho; passo++)
        for (ind = 0; ind < tamanho - 1; ind++)
            if (array[ind] > array[ind + 1]) {
                aux = array[ind];
                array[ind] = array[ind + 1];
                array[ind + 1]= aux;
            }
    return;
}        
