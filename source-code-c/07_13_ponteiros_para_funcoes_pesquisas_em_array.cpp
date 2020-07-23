#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEMS 5

int* pesquisa_linear(int*, int, int);
int* pesquisa_binaria(int*, int, int);

int main() {
    int array[] = {10, 20, 30, 40, 50}, procurado, opcao, *endereco_retornado;
    int* (*pesquisa[])(int*, int, int) = {pesquisa_linear, pesquisa_binaria};
    
    printf("Executa pesquisa linear ou binria num array de inteiros,\n"
           "com os valores: 10, 20, 30, 40 e 50:\n\n");
           
    printf("Qual o tipo de pesquisa que deseja realizar sobre o array? \n\n"
           "(1 -> Pesquisa Linear  2 -> Pesquisa Binaria): ");
    scanf("%d", &opcao);
    printf("\nQual o valor a ser pesquisado no array? ");
    scanf("%d", &procurado);
    if ((endereco_retornado = pesquisa[opcao - 1](array, NUM_ELEMS, procurado)) == NULL)
        printf("\nNao existe o valor no array!\n");
    else
        printf("\nO valor procurado %d esta no endereco de memoria %d e na posicao (indice) %d do array!\n",
               *endereco_retornado, endereco_retornado, endereco_retornado - array);
                     
    printf("\n\n");
    system("pause");
    return 0;
}

int* pesquisa_linear(int *ap_array, int tamanho, int procurado) {
     int *ap_fim;
     
     for (ap_fim = ap_array + (tamanho - 1);
          ap_array <= ap_fim; ap_array++)
         if (*ap_array == procurado)
             return ap_array;
     return NULL;
}

int *pesquisa_binaria(int *ap_array, int tamanho, int procurado) {
    int *ap_inicio, *ap_fim, *ap_meio;
    
    ap_inicio = ap_array;
    ap_fim = ap_array + (tamanho - 1);

    while(ap_inicio <= ap_fim){
        ap_meio = ap_inicio + (ap_fim - ap_inicio) / 2;/* ap_ inicio + (deslocamentos até ap_fim)/2 */ 
        if(*ap_meio == procurado)
            return ap_meio;
        if(procurado > *ap_meio)
            ap_inicio = ap_meio + 1;
        else
            ap_fim = ap_meio - 1;
    }
    return NULL;
}
