/* Programa que lê N numeros inteiros e os mostra na ordem inversa a de leitura
   Usando recursividade */

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define N 10 /* define a quantidade de inteiros lidos */

void imprime_inversa_recursiva(int);

int main () {
    
    printf("Programa que mostra %d numeros inteiros na ordem inversa a de leitura:\n\n", N);

    printf("Informe %d inteiros:\n", N);
    imprime_inversa_recursiva(N);
    
    printf("\n\n");
    system("pause");        
    return 0;
}
            
void imprime_inversa_recursiva(int ordem) {
    int numero;

    if (ordem == 0) {
        printf("Numeros lidos na ordem inversa:\n");
        return;
    }
    scanf("%d", &numero);
    imprime_inversa_recursiva(ordem - 1);
    printf("%d ", numero);
    return;
}
