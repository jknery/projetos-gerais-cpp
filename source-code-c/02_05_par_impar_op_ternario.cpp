/*Este programa determina se um n�mero � par ou impar*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    int numero;
    
    /*L� Numero*/
    printf("Digite um numero inteiro: "); 
    scanf("%d", &numero);
    /*Determina se � par ou impar */
    /* usando o if... else. 
    if (numero % 2 == 0)
        printf("\n%d eh par", numero);     
    else (numero % 2 != 0)
        printf("\n%d eh impar", numero); */

    /* operador  ternario (op��o 1) */
    numero % 2 == 0 ? printf("\n%d eh par", numero) : printf("\n%d eh impar", numero);

    /* operador  ternario (op��o 2) */
    printf("\n\n%d eh %s", numero, numero % 2 == 0 ? "par" : "impar");
   
    /* Finaliza */
    printf("\n\n\n");
    system("pause");
    return 0;
}
