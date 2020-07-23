/* Programa que imprime os digitos de um inteiro
   da direita para esquerda */
#include <stdio.h>
#include <stdlib.h>
int main () {   
    int numero, invertido = 0;   

    printf("Programa que imprime os digitos de "
           "um inteiro da direita para a esquerda:\n\n");
    
    printf("Entre com um inteiro nao negativo: ");
    scanf("%d", &numero);       

    while (numero > 0) {
        invertido = invertido * 10 + numero % 10;
        numero /= 10; /* numero dividido por 10, perde um digito a direita */
    } 
    printf("\n\nNumero invertido = %d",
           invertido); 
         
    printf("\n\n");
    system("pause");
    return 0;
}
