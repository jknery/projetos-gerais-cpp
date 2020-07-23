/* Programa que imprime um valor de potência com base e expoente inteiros */

#include <stdio.h>
#include <stdlib.h>

int potencia(int , int);       

int main() {
    int base, expoente;

    printf("Programa para calcular poencia:\n\n");
    printf("Informe base e expoente: ");
    scanf("%d%d", &base, &expoente);
  
    printf("\n%d^%d =  %d\n\n", base, expoente, potencia(base, expoente));

    system("pause");
    return 0;
}

/* função que calcula potencia */
int potencia(int base, int expoente) {

    if (expoente == 0)
       return 1;
    return base * potencia(base, expoente - 1);
}
