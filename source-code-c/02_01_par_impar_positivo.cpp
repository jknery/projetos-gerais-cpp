/*Este programa determina se um número é par ou impar e se seu valor
  é positivo, negativo ou zero*/
#include <stdlib.h>
#include <stdio.h>

int main() {
    int numero;
    
    /*Lê Numero*/
    printf("Digite um numero inteiro: "); 
    scanf("%d", &numero);
    
    /* Determina se é par ou impar */
    if (numero % 2 == 0)
        printf("\n%d eh par", numero);     
    if (numero % 2 != 0)
        printf("\n%d eh impar", numero);
        
    /* Determina se é 0, negativo ou positivo */
    if (numero == 0)
        printf("\n%d eh zero", numero);     
    if (numero > 0)
        printf("\n%d eh positivo", numero);   
    if (numero < 0)
        printf("\n%d eh negativo", numero);       
          
    /* Finaliza */
    printf("\n\n\n");
    system("pause");
    return 0;
}
