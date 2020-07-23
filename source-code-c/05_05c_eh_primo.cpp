#include <stdio.h>
#include <stdlib.h>

int eh_primo(int);
int conta_divisores(int);
int eh_divisor(int, int);

int main() {
    int numero;
    
    printf("Verifica se um numero inteiro positivo eh ou nao primo:\n\n");
    printf("Qual o numero a verificar?\n");
    scanf("%d", &numero);
    
    if (eh_primo(numero))
        printf("\n%d eh primo!\n", numero);
    else
        printf("\n%d nao eh primo!\n", numero);

    printf("\n\n ");
    system("pause");
    return 0;
}

int eh_primo(int numero) {
    
    return conta_divisores(numero) == 2 ? 1 : 0;
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
