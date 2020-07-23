#include <stdio.h>
#include <stdlib.h>

/* Prot�tipo da fun��o potencia */
float potencia (float, int);

/* Programa para calcular uma potencia utilizando a fun��o potencia com base real e expoente inteiro */

/* fun��o main */
int main() {
    float base_real;
    int expoente_inteiro;
    
    printf("Calculo de uma pot�ncia com base real e expoente inteiro:\n\n");
    printf("Informe um valor real para a base da potencia: ");
    scanf("%f", &base_real);
    printf("Informe um valor inteiro para o expoente da potencia: ");
    scanf("%d", &expoente_inteiro);
    printf("\n%f elevado a %d eh %f.\n\n",
           base_real, expoente_inteiro,
           potencia(base_real, expoente_inteiro));
    
    system("pause");
    return 0;
}

/* fun��o potencia */
float potencia(float base, int expoente) {
    int vezes;
    float pot;
    
    pot = 1;
    for (vezes = 1; vezes <= expoente; vezes++)
        pot *= base;
        
    return pot;
}
