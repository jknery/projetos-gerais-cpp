/*
   Este programa duplica os elementos de um array e troca o 
   conteúdo dos elementos array[0] e array[1].
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void imprime_array(int[], int);
void duplica_elementos_array(int[], int);
void troca_por_valor(int, int);
void troca_por_referencia(int *, int *);

int main() {
    /* O identificador array é um APONTADOR para o elemento array[0]!!! */
    int array[TAM] = {10, 20, 30, 40, 50};  
                         
    printf("Este programa duplica os elementos de um array e troca o\n"
           "conteudo dos elementos array[0] e array[1].");
    printf("\n\narray antes de chamar duplicar:    ");
    imprime_array(array, TAM);           

    duplica_elementos_array(array, TAM); /* O primeiro parâmetro, array, é um apontador */
    
    printf("\n\narray depois de executar duplicar: ");
    imprime_array(array, TAM);
    
    /* Passagem de argumentos por valor */                                      
    printf("\n\n\nDepois de executar troca_por_valor(array[0],array[1]), o array continua assim:\n");
    troca_por_valor(array[0],array[1]);
    imprime_array(array, TAM); 
    
    /* Passagem de argumentos por referência (endereço) */
    printf("\n\n\nAo executar troca_por_referencia(&array[0],&array[1]), os elementos sao trocados:\n");
    troca_por_referencia(&array[0],&array[1]);
    imprime_array(array, TAM); 
    
    printf("\n\nAtencao!! Faca uma funcao para ordenar o array que utilize uma outra funcao troca_elementos().");
                                                     
    printf("\n\n");   
    system("pause");
    return 0;
}

void imprime_array(int a[], int tamanho) {
    int i;
    
    for (i = 0; i < tamanho; i++)
        printf("%d  ",a[i]);
    return;
}

void duplica_elementos_array(int a[], int tamanho) {
    int i;
    
    for (i = 0; i < tamanho; i++)
        a[i]*= 2;
    return;  
}

/* Troca o conteúdo das VARIÁVEIS LOCAIS, var1 e var2  
   Observe que var1 e var2 recebem cópias dos valores de array[0] e array[1], respectivamente */
void troca_por_valor(int var1, int var2){ 
    int aux;

    aux = var1;
    var1 = var2;
    var2 = aux;
    return; 
}

/* Troca o conteúdo das variáveis apontadas por pont1 e pont2 
   Observe que pont1 e pont2 recebem endereços (referências) das variáveis array[0] e array[1] */
void troca_por_referencia(int *pont1, int *pont2){
    int aux;
    
    aux = *pont1;
    *pont1 = *pont2;
    *pont2 = aux;
    return; 
}













