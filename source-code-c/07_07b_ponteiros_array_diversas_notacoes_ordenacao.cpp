/* Este programa ordena os elementos de um array,
   utilizando apontadores - n�o usa indexa��o */

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void imprime_array(int[], int);
void ordena_array(int *, int);

int main() {
    int array[TAM] = {50, 40, 30, 20, 10}; /* o identificador array � um APONTADOR para o elemento array[0]!!! */ 
                         
    printf("Este programa ordena os elementos de um array");
    printf("\n\narray antes de chamar ordena_array:                 ");
    imprime_array(array, TAM);           

    ordena_array(array, TAM);   /* o primeiro par�metro, array, � um apontador */
    
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

/*Ordena um array usando o m�todo bubble sort (borbulha) */
void ordena_array(int *pont_array, const int tamanho) {
    void troca_por_referencia(int *, int *);
    int passo, deslocamento;
    
    for (passo = 1; passo <= tamanho - 1; passo++)
        for(deslocamento = 0; deslocamento <= tamanho - 2; deslocamento++)
           if (*(pont_array + deslocamento) > *(pont_array + deslocamento + 1))/*Nota��o PONTEIRO/DESLOCAMENTO*/
               troca_por_referencia(pont_array + deslocamento, pont_array + deslocamento + 1);
    return;         
}
 
/* Troca o conte�do das vari�veis apontadas por pont1 e pont2 
   Observe que pont1 e pont2 recebem endere�os (refer�ncias) das vari�veis array[0] e array[1] */
void troca_por_referencia(int *pont1, int *pont2) {
    int aux;
    
    aux = *pont1;
    *pont1 = *pont2;
    *pont2 = aux;
    return;  
}   
