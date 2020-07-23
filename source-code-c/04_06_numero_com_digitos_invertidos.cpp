/* Programa que mostra um inteiro correspondente ao
   inteiro lido com os digitos invertidos */
#include <stdio.h>
#include <stdlib.h>
int main() {   

    int numero, num_invertido, num_aux;   

    printf("Programa que mostra um inteiro "
           "correspondente ao inteiro lido com os"
           " digitos invertidos:\n\n");
    
    printf("Entre com um inteiro nao negativo: ");
    scanf("%d", &numero);       
   
    num_aux = numero;   /* num_aux auxilia a preservar o valor de numero */
    num_invertido = 0;    
    while (num_aux > 0) {
        num_invertido = num_invertido * 10 +
                        num_aux % 10; /* acumula o inverso anterior multiplicado por 10 e somado com o novo resto*/
        num_aux = num_aux / 10; /*novo numero a ser dividido*/
    } 
    
    printf("\n\nO inteiro %d com os digitos "
           "invertidos eh o inteiro %d",
            numero, num_invertido); 
      
    printf("\n\n");
    system("pause");
    return 0;
}
