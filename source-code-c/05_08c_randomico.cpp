/* Exemplo de  randomização */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define QUANT_NUM 20

int main() {    
    int cont;      
    
    printf("Programa que gera uma sequencia de %d numeros randomicos:\n\n", QUANT_NUM);
    
    srand(time(NULL));      /* srand() randomiza uma semente para rand(); 
                               time(NULL) retorna o tempo, em segundos, que o programa foi
                               compilado - sempre será um valor diferente.
                               É necessário #include <time.h> */
                               
    for (cont = 1; cont <= QUANT_NUM; cont++)
        printf("%d\n", rand()); /* a) rand() retorna um número aleatório de 0 a 32767 */
        
    printf("\n\n");
    system("pause");
    return 0;
}
