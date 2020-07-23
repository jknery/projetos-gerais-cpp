/* Programa que ilustra passagem de array para funções. Este programa  *
 * lê dois arrays, imprime os arrays lidos e o menor elemento de cada  *
 * array. Para cada uma dessas tarefa é utilizada uma função.          */

#include <stdlib.h>
#include <stdio.h>

#define TAM_MAX 10

void le_array(int[], int);
void imprime_array(int[], int);
int  menor_elemento (int[], int);

int main() {
    int tamanho1, tamanho2, indice, soma, cont_par;
    int array1[TAM_MAX], array2[TAM_MAX];
    float media;
    
    printf("Programa le e imprime dois arrays e mostra seus menores elementos usando funcoes:\n\n");

    /* Lê os tamanhos dos arrays */
    printf("Qual o tamanho do array-1? (maximo %d) ", TAM_MAX);
    scanf("%d", &tamanho1);
    printf("Qual o tamanho do array-2? (maximo %d) ", TAM_MAX);
    scanf("%d", &tamanho2);
    
    /*Lê os elementos dos dois arrays */
    printf("\nDigite os %d elementos do array-1:\n", tamanho1);
    le_array(array1, tamanho1);
    printf("\n\nDigite os %d elementos do array-2:\n", tamanho2);
    le_array(array2, tamanho2);
    
    /*Imprime os dois arrays */
    printf("\n\nElementos do array1: ");
    imprime_array(array1, tamanho1); 
    printf("\nMenor elemento: %d ", menor_elemento(array1,tamanho1));   
    printf("\n\nElementos do array2: ");
    imprime_array(array2, tamanho2);
    printf("\nMenor elemento: %d ", menor_elemento(array2,tamanho2));
    
    printf("\n\n");
    system("pause");
    return 0;
}

void le_array(int array[], int tamanho) {
    int indice;

    for (indice = 0; indice < tamanho; indice++){
       printf("\nElemento %d: ", indice);
       scanf("%d",&array[indice]);
    }
    return; 
}

void imprime_array(int array[], int tamanho) {    
    int indice;

    for (indice = 0; indice < tamanho; indice++)
        printf("%d ",array[indice]);
    return;   
}

int menor_elemento(int array[], int tamanho) {
    int indice, menor;

    menor = array[0];
    for (indice = 1; indice < tamanho; indice++)
        if (array[indice] < menor)
            menor = array[indice];
    return menor;     
}          
