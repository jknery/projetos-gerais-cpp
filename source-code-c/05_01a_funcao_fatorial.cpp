/* Programa para calcular o fatorial de um inteiro n�o negativo usando uma fun��o */

#include <stdio.h>
#include <stdlib.h>

/* Prot�tipo da fun��o fatorial */
int fatorial (int);

/* fun��o main */
int main() {
    int inteiro;
    
    printf("Calculo do fatorial de um numero inteiro nao negativo:\n\n");
    printf("Informe o inteiro nao negativo: ");
    scanf("%d", &inteiro);
    printf("\nO fatorial do numero %d eh %d\n\n\n",
           inteiro, fatorial(inteiro));
    
    system("pause");
    return 0;
}

/* fun��o fatorial */
int fatorial(int numero) {
    int fat, fator;
    
    fat = 1;
    for (fator = 1; fator <= numero; fator++)
        fat *= fator;
        
    return fat;
}
