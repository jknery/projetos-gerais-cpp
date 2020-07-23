/* Este programa imprime um array e duplica os elementos desse array. As funcoes
   que fazem essas tarefas utilizam ponteiros e aritmetica de apontadores     */

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void imprime_array_usando_aritmet_apontadores(int *, int);
void duplica_array_usando_aritmet_apontadores(int *, int);

int main() {
    int i, array[TAM] = {10, 20, 30, 40, 50}; /* o identificador array é um APONTADOR !!! */ 
    int *pont;

    printf("Este programa imprime um array e duplica os elementos desse array. As funcoes "
           "que fazem essas tarefas utilizam ponteiros e aritmetica de apontadores.\n\n");
      
    printf("\n\nImprime array usando Aritmetica de Apontadores:\n");
    imprime_array_usando_aritmet_apontadores(array, TAM);
    
    printf("\n\nDuplica elementos do array usando Aritmetica de Apontadores:\n");
    duplica_array_usando_aritmet_apontadores(array, TAM);    
    imprime_array_usando_aritmet_apontadores(array, TAM);
     
    printf("\n\nEXERCICIO: Faca uma funcao para ordenar o array usando Aritmetica de Apontadores");
                                                     
    printf("\n\n");   
    system("pause");
    return 0;
}

void imprime_array_usando_aritmet_apontadores(int *pont, int tamanho) {
    int ind;
    
    for (ind = 0; ind <= tamanho - 1; ind++)
        printf("%d  ",pont[ind]);   /*NOTAÇÃO DE SUBSCRITO DE PONTEIRO*/
    return;
}

void duplica_array_usando_aritmet_apontadores(int *pont, int tamanho) {
    int deslocamento;
    
    for (deslocamento = 0; deslocamento <= tamanho - 1; deslocamento++)
        *(pont + deslocamento) *= 2; /*NOTAÇÃO DE PONTEIRO/DESLOCAMENTO*/
    return;
}
