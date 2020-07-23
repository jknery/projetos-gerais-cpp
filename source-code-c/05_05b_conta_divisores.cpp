#include <stdio.h>
#include <stdlib.h>

int conta_divisores(int);
int eh_divisor(int, int);

int main() {
    int numero;
    
    printf("Imprime a quantidade de divisores de um numero"
           " inteiro positivo:\n\n");
    printf("Qual o numero para calculo dos divisores?\n");
    scanf("%d", &numero);
    printf("Quantidade de divisores de %d eh %d\n",
           numero, conta_divisores(numero));

    printf("\n\n ");
    system("pause");
    return 0;
}

int conta_divisores(int inteiro) {
    int divisor, contador = 0;
     
    for (divisor = 1; divisor <= inteiro;
         divisor++)
        if (eh_divisor(inteiro, divisor))
            contador++; 
    return contador;
}

int eh_divisor(int inteiro, int divisor) {

    return inteiro % divisor == 0 ? 1 : 0;
}
