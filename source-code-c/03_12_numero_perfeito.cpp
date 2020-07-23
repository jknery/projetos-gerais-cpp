/* Programa que verifica se um numero inteiro
   positivo é ou não perfeito
   Um número perfeito é aquele cuja soma de
   seus divisores é duas vezes
   o seu valor. Ex.: 6 e 28 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, divisor, soma_divisores;
    
    printf("Verifica se um numero inteiro"
           " positivo eh ou nao perfeito:\n\n");

    printf("Qual o valor do numero: ");
    scanf("%d", &numero);
    
    for (soma_divisores = 0, divisor = 1;
         divisor <= numero; divisor++)
        if(numero % divisor == 0)
            soma_divisores += divisor;
            
    if (soma_divisores == 2 * numero)
        printf("\nEste numero eh perfeito!\n", numero);
    else
        printf("\nEste numero nao eh perfeito!\n", numero);
    
    printf("\n\n");
    system("pause");
    return 0;
}
