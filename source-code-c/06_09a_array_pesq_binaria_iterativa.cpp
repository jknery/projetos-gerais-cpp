/*
 * Programa que implementa pesquisa binária. Observe o código iterativo e o recursivo
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int pesq_binaria(int[], int, int);

int main() {
    int chave, pos, array[TAM] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    char resposta;

    printf("Programa que faz Pesquisa Binaria num array:\n\n", chave);
    printf("O array foi inicializado com: 10, 20, 30, 40, 50, 60, 70, 80, 90 e 100.\n\n");
    
    /* laço que interage com o usário para saber se ele deseja realizar outra pesquisa */ 
    do {  
        printf("\nInforme a chave a ser pesquisada: ");
        scanf("%d", &chave);
        pos = pesq_binaria(array, TAM, chave);
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

/***** Pesquisa Binária: Código Iterativo *****/
int pesq_binaria(int array[], int tam, int chave) {
    int inicio = 0, meio, fim = tam - 1;
    
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;    
        if (chave == array[meio])
            return meio;
        if (chave < array[meio])
            fim = meio - 1;
        else inicio = meio + 1; 
    }       
    return -1;
}
