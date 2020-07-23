#include <stdio.h>
#include <stdlib.h>

/* Protótipo da função fatorial */
int fatorial (int);

/* Progrma para calcular a soma do fatorial de dois inteiros não negativos */

/* função main */
int main() {
    int inteiro1, inteiro2;
    
    printf("Calculo da soma do fatorial de dois inteiros:\n\n");
    printf("Informe dois inteiros nao negativos: ");
    scanf("%d %d", &inteiro1, &inteiro2);
    printf("\nA soma dos fatoriais dos numeros lidos eh %d\n\n", fatorial(inteiro1) + fatorial(inteiro2));
    
    system("pause");
    return 0;
}

/* função fatorial */
int fatorial(int numero) {
    int fat, fator;
    
    fat = 1;
    for (fator = 1; fator <= numero; fator++)
        fat *= fator;
        
    return fat;
}
