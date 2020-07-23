#include <stdio.h>
#include <stdlib.h>

int main() {
    int lado, linha, coluna;
    
    printf("Imprime um quadrado cujo tamanho do lado"
           "sera informado:\n\n");
    printf("Qual o tamanho do lado?:\n");
    scanf("%d", &lado);
    for (linha = 1; linha <= lado; linha++) {
         for (coluna = 1; coluna <= lado; coluna++)
             printf("* ");
         printf("\n");
    }
    
    printf("\n\n");
    system("pause");
    return 0;
}
