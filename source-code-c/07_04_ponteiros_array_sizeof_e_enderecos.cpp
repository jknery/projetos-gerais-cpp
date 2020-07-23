/* Este programa utiliza o operador sizeof, demonstra o tamanho de 
   um array em bytes e os enderecos consecutivos de seus elementos.*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void imprime_array(int[], int);

int main() {
    int i, array[5] = {10, 20, 30, 40, 50}; /* o identificador array é um APONTADOR!!! */ 

    printf("Este programa utiliza o operador sizeof, demonstra o tamanho de \n"
           "um array em bytes e os enderecos consecutivos de seus elementos.\n\n");

    printf("\nTamanho de um char   : sizeof(char)        = %d bytes", sizeof(char));    
    printf("\nTamanho de um inteiro: sizeof(int)         = %d bytes", sizeof(int));
    printf("\nTamanho de um float  : sizeof(3.14)        = %d bytes", sizeof(3.14));
    printf("\nTamanho de um inteiro: sizeof(long double) = %d bytes", sizeof(long double)); 
    
    printf("\n\n\nConsidere o array desse programa: ");    
    imprime_array(array, TAM); 

    printf("\n\nEste array tem %d elementos inteiros. Portanto, ocupa um total de:\n\n\t " 
           "sizeof(int) * %d = %d bytes \n",  TAM, TAM, sizeof(int)*TAM);
    
    printf("\n\nO operador sizeof ao ser utilizado em um array, retorna o tamanho do array:\n\n\t "
           "sizeof(array)   = %d bytes\n", sizeof(array));       

    printf("\n\n");   
    system("pause");
    system("cls");    

    printf("\nAinda considerando o array desse programa: ");    
    imprime_array(array, TAM); 
          
    printf("\n\n\nLembrando que um array eh armazenado em posicoes consecutivas de memoria, \n"
           "observe o endereco (em decimal) de cada elemento desse array. O endereco "
           "de array eh dado por: &array = %d\n\n", &array);
                

    printf("Endereco do elemento    Conteudo apontado por: array + deslocamento de elementos");                                                       
    for (i = 0; i <= TAM - 1; i++){
        printf("\n&array[%d] = %d\t", i, &array[i]);
        printf("*(array + %d) = %d", i, *(array + i)); /*i: deslocamento de elementos do array */  
    }         
                  
    printf("\n\nOs operadores de ponteiros, * e &, quando aplicados consecutivamente se anulam:\n");
    printf("\n*&array = %d", *&array);
    printf("\n&*array = %d", &*array);
                                                      
    printf("\n\n");   
    system("pause");
    return 0;
}

void imprime_array(int array[], const int tamanho) {
    int indice;
    
    for (indice = 0; indice < tamanho; indice++)
        printf("%d  ",array[indice]);
    return;
}


