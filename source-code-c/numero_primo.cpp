/* Programa que verifica se um numero inteiro
   positivo é ou não primo
   Um número primo é aquele que só tem dois divisores */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, divisor, soma_divisores;
    
    printf("Verifica se um numero inteiro"
           " positivo eh ou nao primo:\n\n");

    printf("Qual o valor do numero: ");
    scanf("%d", &numero);
    
    for (soma_divisores = 0, divisor = 1;
         divisor <= numero; divisor++)
        if(numero % divisor == 0)
            soma_divisores += divisor;
            
    if (soma_divisores == 1 + numero)
        printf("\nEste numero eh primo!\n", numero);
    else
        printf("\nEste numero nao eh primo!\n", numero);
    
    printf("\n\n");
    system("pause");
    return 0;
}
