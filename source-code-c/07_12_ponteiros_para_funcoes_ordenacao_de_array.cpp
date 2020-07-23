#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void le_array(int *, int);
void imprime_ordem_direta(int *, int);
void imprime_ordem_inversa(int *, int);

int main() {
    int array[100], n, ordem;
    void (*funcao_imprime[])(int *, int) = {imprime_ordem_direta, imprime_ordem_inversa};
    
    printf("Le um array inteiro de N elementos e o imprime na ordem \n"
           "de leitura ou na ordem inversa a da leitura\n");
    printf("\nInforme o valor de N, n <= %d: ", MAX);
    scanf("%d", &n);
    le_array(array, n);
    printf("\n\nQual a ordem que deseja imprimir o array? \n\n"
           "(1 -> Ordem Direta  2 -> Ordem Inversa): ");
    scanf("%d", &ordem);
    (funcao_imprime[ordem - 1])(array, n);

    printf("\n\n");
    system("pause");
    return 0;
}

void le_array(int *ap_array, int tamanho) {
    int *pont_aux_array;
    
    printf("\n\nInforme os %d elementos inteiros do array:\n", tamanho);
    for (pont_aux_array = ap_array; pont_aux_array < ap_array + tamanho;
         pont_aux_array++)
        scanf("%d", pont_aux_array);
    return;
}

void imprime_ordem_inversa(int *ap_array, const int tamanho) {
    int *fim_array;
    
    printf("\n\nElementos na ordem inversa:\n\n");
    for (fim_array = ap_array + tamanho - 1; fim_array >= ap_array;
         fim_array--)
        printf("%d  ", *fim_array);
    return;
}

void imprime_ordem_direta(int *ap_array, int tamanho) {
    int *inicio_array;
    
    printf("\n\nElementos na ordem direta:\n\n");
    for (inicio_array = ap_array; inicio_array < ap_array + tamanho; 
         inicio_array++)
        printf("%d  ", *inicio_array);
    return;
}
