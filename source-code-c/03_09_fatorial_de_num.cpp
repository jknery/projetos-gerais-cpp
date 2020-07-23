/* Programa que imprime o fatorial de um número lido */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, fator, fatorial = 1; /* fatorial tem que ter um valor inicial - um */
    
    printf("Impressao do fatorial do Numero Lido:\n\n");
    
    printf("Qual o numero para o calculo do fatorial: ");
    scanf("%d", &num);
    
    /* Gera os fatores e os multiplica para o fatorial */
    for(fator = 1; fator <= num; fator++)
        fatorial *= fator; /* Multiplica o inteiro para o fatorial */
 
    /* Impressao apos o fatorial pronto */
    printf("\nO fatorial de %d eh %d.\n\n", num, fatorial);
    
    system("pause");
    return 0;
}
