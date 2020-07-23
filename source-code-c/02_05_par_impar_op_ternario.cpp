/*Este programa determina se um número é par ou impar*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    int numero;
    
    /*Lê Numero*/
    printf("Digite um numero inteiro: "); 
    scanf("%d", &numero);
    /*Determina se é par ou impar */
    /* usando o if... else. 
    if (numero % 2 == 0)
        printf("\n%d eh par", numero);     
    else (numero % 2 != 0)
        printf("\n%d eh impar", numero); */

    /* operador  ternario (opção 1) */
    numero % 2 == 0 ? printf("\n%d eh par", numero) : printf("\n%d eh impar", numero);

    /* operador  ternario (opção 2) */
    printf("\n\n%d eh %s", numero, numero % 2 == 0 ? "par" : "impar");
   
    /* Finaliza */
    printf("\n\n\n");
    system("pause");
    return 0;
}
