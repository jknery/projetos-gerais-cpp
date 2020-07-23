/*Este programa utiliza Aritmética de Apontadores para imprimir os elementos de um array*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void imprime_array_ordem_direta(int *, int);
void imprime_array_ordem_inversa(int *, int);
void imprime_array_elementos_posicoes_pares(int *, int);
void imprime_array_elementos_que_sao_pares(int *, int);
int* pesquisa_linear(int* , int, int);

int main() {
    int array[TAM] = {5, 10, 15, 20, 25}; /* o identificador array é um APONTADOR CONST !!! */ 
    int *pont, chave_de_procura, *achado;
    
    
    printf("Este programa utiliza Aritmetica de Apontadores para imprimir\n"
           "os elementos de um array:\n\n");

    printf("\n\nArray:   ");
    imprime_array_ordem_direta(array, TAM);
        
    printf("\n\n\tTamanho de um inteiro :         sizeof(int)     = %d bytes", sizeof(int));       
    printf("\n\tTamanho do array :              sizeof(array)   = %d bytes", sizeof(array));     
    printf("\n\tEndereco do array:              array           = %d", array);
    printf("\n\tEndereco do primeiro elemento:  &array[0]       = %d", &array[0]);  
    printf("\n\tEndereco do ultimo elemento:    &array[TAM - 1] = %d", &array[TAM - 1]);
    printf("\n\t                   ou entao:    array + TAM - 1 = %d", array + TAM - 1);
  
    printf("\n\nElementos do array na ordem direta:     ");        
    imprime_array_ordem_direta(array, TAM);
        
    printf("\n\nElementos do array na ordem inversa:    ");    
    imprime_array_ordem_inversa(array, TAM);

    printf("\n\nElementos do array armazenados nas posicoes pares: ");       
    imprime_array_elementos_posicoes_pares(array, TAM);
    
    printf("\n\nElementos do array que sao pares: ");       
    imprime_array_elementos_que_sao_pares (array, TAM);

    printf("\n\nProcura elemento no array: ");       
    printf("\n\nInforme elemento a procurar: ");       
    scanf("%d", &chave_de_procura);
    if (achado = pesquisa_linear(array, TAM, chave_de_procura))
        printf("\nO valor %d encontra-se no array!", *achado);
    else
        printf("O valor %d nao encontra-se no array!", chave_de_procura);
                                                            
    printf("\n\n\n");   
    system("pause");
    return 0;
}

void imprime_array_ordem_direta(int *pont, const int tamanho) {
    int *pont_ult;

    for (pont_ult = pont + tamanho - 1; pont <= pont_ult; pont++)
        printf("%d  ", *pont);
    return;
}

void imprime_array_ordem_inversa(int *pont, const int tamanho) {
    int *pont_ultimo;

    pont_ultimo = pont + tamanho - 1;
    for (; pont_ultimo >= pont; pont_ultimo--)
        printf("%d  ", *pont_ultimo);
    return;
}

void imprime_array_elementos_posicoes_pares(int *pont, const int tamanho) {
    int *pont_ultimo;

    pont_ultimo = pont + tamanho - 1;
    for (; pont <= pont_ultimo; pont += 2)
        printf("%d  ", *pont);    
    return;
} 

void imprime_array_elementos_que_sao_pares(int *pont, const int tamanho) {
    int *pont_ult;

    pont_ult = pont + tamanho - 1;
    for (; pont <= pont_ult; pont++)
        if (*pont % 2 == 0)
            printf("%d  ", *pont);
    return;
}

int* pesquisa_linear(int *array, int tam, int procurado) {
    int *ap_fim = array + tam - 1;

    for (; array <= ap_fim; array++)
        if (procurado == *array)
            return array;
    return NULL;
}







