/*
 * Programa que implementa pesquisa linear (sequencial). Observe o código iterativo e o recursivo
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int pesq_linear(int[], int, int);

int main() {
    int chave, pos, array[TAM] = {40, 10, 70, 20, 100, 30, 50, 90, 60, 80};
    char resposta;

    printf("Realiza pesquisa linear num array:\n\n", chave);
    printf("O array foi inicializado com: 40, 10, 70, 20, 100, 30, 50, 90, 60, 80.\n\n");
    
    /* laço que interage com o usário para saber se ele deseja realizar outra pesquisa */ 
    do {  
        printf("\nInforme a chave a ser pesquisada: ");
        scanf("%d", &chave);
        pos = pesq_linear(array, TAM, chave);
        if ( pos == -1)
            printf("\nValor %d nao encontra-se no array!\n", chave);
        else
            printf("\nValor %d encontra-se na posicao %d do array!\n", chave, pos);
        printf("\nOutra pesquisa?(s/n): "),
        scanf(" %c", &resposta);
    } while (resposta != 'n' && resposta != 'N');
    
    printf("\n");
    system("pause");
    return 0;
}

/* Função pesquisa linear com código iterativo */
int pesq_linear(int array[], int tam, int procurado) {
    int ind;
    
    for (ind = 0; ind < tam; ind++)
        if (procurado == array[ind])
            return ind;
    return -1;
}
