/* Programa para calcular o seno de um ângulo em radianos pela série:
 *                    3      5      7      9
 *                   x      x      x      x
 *    seno(x) = x - ---- + ---- - ---- + ---- - ...
 *                   3!     5!     7!     9!
 */
#include <stdio.h>
#include <stdlib.h>

long int fatorial (int);       /* Protótipo da função fatorial */
float potencia (float, int);  /* Protótipo da função potencia */

/* função main */
int main() {
    int num_termos, termos, expoente, sinal = 1;
    float angulo_x, seno_x;
    
    printf("Calculo do seno de um angulo em radianos pela série:\n\n");
    printf("                    3      5      7      9\n");
    printf("                   x      x      x      x\n");
    printf("    seno(x) = x - ---- + ---- - ---- + ---- - ...\n");
    printf("                   3!     5!     7!     9!\n\n");

    printf("Informe um valor para o angulo x em radianos: ");
    scanf("%f", &angulo_x);
    printf("Informe o número de termos (numero de termos > 0): ");
    scanf("%d", &num_termos);
    
    for (seno_x = angulo_x, termos = 2, expoente = 3;
         termos <= num_termos;
         termos++, expoente += 2) {
        sinal *= -1;
        seno_x += sinal * (potencia(angulo_x, expoente)
                  / fatorial(expoente));
    }

    printf("\nseno(%f) = %f\n\n", angulo_x, seno_x);

    system("pause");
    return 0;
}

/* função fatorial */
long int fatorial(int numero) {
    long int fat, fator;
    
    fat = 1;
    for (fator = 1; fator <= numero; fator++)
        fat *= fator;
        
    return fat;
}

/* função potencia */
float potencia(float base, int expoente) {
    int vezes;
    float pot;
    
    pot = 1;
    for (vezes = 1; vezes <= expoente; vezes++)
        pot *= base;
        
    return pot;
}
