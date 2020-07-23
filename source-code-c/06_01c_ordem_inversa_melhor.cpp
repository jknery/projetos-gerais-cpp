/* Programa que lê 10 numeros inteiros e os mostra na ordem inversa a de leitura.
   Usando um array  */

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define N 10

int main() {
    int indice, numeros[N]; /* a quantidade de elementos do array
                               tem que ser uma constante */
    printf("Programa que mostra 10 numeros inteiros na ordem inversa a de leitura:\n\n");

    /* Leitura e preenchimento dos elementos do array */
    printf("Informe 10 inteiros:\n");
    for (indice = 0; indice <= N - 1; indice++)
        scanf("%d", &numeros[indice]);
    
    /* Impressão dos elementos do array */
    printf("Numeros lidos na ordem inversa:\n");
    for (indice = N - 1; indice >= 0; indice--)
        printf("%d ", numeros[indice]);
    
    printf("\n\n");
    system("pause");        
    return 0;
}
