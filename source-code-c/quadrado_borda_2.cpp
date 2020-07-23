#include <stdio.h>
#include <stdlib.h>

int main() {
    int lado, asterisco;
    
    printf("Imprime um quadrado cujo tamanho do lado"
           "sera informado:\n\n");
    printf("Qual o tamanho do lado?:\n");
    scanf("%d", &lado);
    for (asterisco = 1; asterisco <= lado * lado;
         asterisco++) {
        printf("* ");
        if (asterisco % lado == 0)
            printf("\n");
    }
    
    printf("\n\n");
    system("pause");
    return 0;
}
