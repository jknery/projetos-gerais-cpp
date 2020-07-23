#include <stdio.h>
#include <stdlib.h>

void imprime_divisores(int);

int main() {
    int numero;
    
    printf("Imprime os divisores de um numero"
           " inteiro positivo:\n\n");
    printf("Qual o numero para calculo dos divisores?\n");
    scanf("%d", &numero);
    printf("Divisores de %d\n", numero);
    imprime_divisores(numero);

    printf("\n\n ");
    system("pause");
    return 0;
}

void imprime_divisores(int inteiro) {
    int divisor;
     
    for (divisor = 1; divisor <= inteiro;
         divisor++)
        if (inteiro %  divisor == 0)
            printf("%d\n", divisor); 
    return;
}

