/* Exemplo de  randomiza��o */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define QUANT_NUM 20

int main() {    
    int cont;      
    
    printf("Programa que gera uma sequencia de %d numeros randomicos:\n\n", QUANT_NUM);
    
    srand(time(NULL));      /* srand() randomiza uma semente para rand(); 
                               time(NULL) retorna o tempo, em segundos, que o programa foi
                               compilado - sempre ser� um valor diferente.
                               � necess�rio #include <time.h> */
                               
    for (cont = 1; cont <= QUANT_NUM; cont++)
        printf("%d\n", rand()); /* a) rand() retorna um n�mero aleat�rio de 0 a 32767 */
        
    printf("\n\n");
    system("pause");
    return 0;
}
