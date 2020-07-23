/* Este programa ordena os elementos de um array,
   utilizando apontadores - não usa indexação */

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void imprime_array(int[], int);
void ordena_array(int *, int);

int main() {
    int array[TAM] = {50, 40, 30, 20, 10}; /* o identificador array é um APONTADOR para o elemento array[0]!!! */ 
                         
    printf("Este programa ordena os elementos de um array");
    printf("\n\narray antes de chamar ordena_array:                 ");
    imprime_array(array, TAM);           

    ordena_array(array, TAM);   /* o primeiro parâmetro, array, é um apontador */
    
    printf("\n\narray depois de executar ordena_array(array,TAM):   ");
    imprime_array(array, TAM);
                                                         
    printf("\n\n\n");   
    system("pause");
    return 0;
}

/* Imprime um array */
void imprime_array(int *pont_array, const int tamanho) {
    int i;

    for(i = 0; i <= tamanho - 1; i++)
        printf("%d  ", *(pont_array + i));
    return;  
}

/*Ordena um array usando o método bubble sort (borbulha) */
void ordena_array(int *pont_array, const int tamanho) {
    void troca_por_referencia(int *, int *);
    int passo, deslocamento;
    
    for (passo = 1; passo <= tamanho - 1; passo++)
        for(deslocamento = 0; deslocamento <= tamanho - 2; deslocamento++)
           if (*(pont_array + deslocamento) > *(pont_array + deslocamento + 1))/*Notação PONTEIRO/DESLOCAMENTO*/
               troca_por_referencia(pont_array + deslocamento, pont_array + deslocamento + 1);
    return;         
}
 
/* Troca o conteúdo das variáveis apontadas por pont1 e pont2 
   Observe que pont1 e pont2 recebem endereços (referências) das variáveis array[0] e array[1] */
void troca_por_referencia(int *pont1, int *pont2) {
    int aux;
    
    aux = *pont1;
    *pont1 = *pont2;
    *pont2 = aux;
    return;  
}   
