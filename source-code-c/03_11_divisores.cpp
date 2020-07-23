/* Programa que imprime os divsores de um numero */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, divisor;
    
    printf("Impressao dos divisores de um numero:\n\n");

    printf("Qual o valor do numero: ");
    scanf("%d", &numero);
    
    /* Gera os possíveis divisores e imprime apenas os divisores */
    printf("\nDivisores de %d:\n", numero);
    for (divisor = 1; divisor <= numero; divisor++) 
       if (numero % divisor == 0)
          printf("%d eh divisor!\n", divisor);
    
    printf("\n");
    system("pause");
    return 0;
}
