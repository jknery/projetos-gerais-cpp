
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define QUANT 10

int main() {    
    int cont, quant, face;      
    
    printf("Programa que gera uma sequencia de %d numeros randomicos:\n\n", QUANT);
    
    for (cont = 1; cont <= QUANT; cont++){
        face = rand()%6 + 1;
        printf("%d\n", face); /* a) rand() retorna um número aleatório de 0 a 32767 */
    }
                    
    printf("\n\n");
    
    system("pause");
    return 0;
}

