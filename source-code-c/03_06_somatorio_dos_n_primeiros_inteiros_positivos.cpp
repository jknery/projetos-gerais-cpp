/* Programa que imprime o somatório de N numeros inteiros positivos */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, inteiro, somatorio = 0; /* somatorio tem que ter um valor inicial - zero */
    
    printf("Impressao do somatorio dos N primeiros numeros inteiros positivos:\n\n");
    
    printf("Qual o valor de N:\n");
    scanf("%d", &n);

    for (inteiro = 1; inteiro <= n; inteiro += 1) 
        somatorio += inteiro; /* Acumula o inteiro para o somatorio */

    /* Impressao apos o somatorio pronto */
    printf("\nO somatorio dos %d primeiros inteiros positivos eh %d.\n", n, somatorio);
    
    printf("\n");
    system("pause");
    return 0;
}
