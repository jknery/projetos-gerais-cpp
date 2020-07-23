/* Programa que imprime os N primeiros numeros pares positivos */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, par, contador;
    
    /* finalidade do programa */
    printf("Impressao dos N primeiros numeros pares positivos:\n\n");

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    printf("\nSequencia dos %d primeiros pares positivos:\n", n);
    /* Gera e imprime N números pares */
    for(par = 0, contador = 1; contador <= n;
        par += 2, contador++) 
        printf("\n%d", par);

    
    printf("\n\n");
    system("pause");
    return 0;
}
