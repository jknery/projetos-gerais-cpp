/* Exemplo de  randomização */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define QUANT_NUM 20
#define SEMENTE 10


int main() {    
    int cont;      
    
    printf("Gera uma sequencia de %d numeros randomicos com definecao de semente:\n\n", QUANT_NUM);
    
    srand(SEMENTE);      /* srand() randomiza uma semente para rand() */ 
    
    for (cont = 1; cont <= QUANT_NUM; cont++)
        printf("%d\n", rand()); /* a) rand() retorna um número aleatório de 0 a 32767 */
        
    printf("\n\n");
    system("pause");
    return 0;
}

