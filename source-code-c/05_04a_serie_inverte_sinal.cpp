#include <stdio.h>
#include <stdlib.h>

/* função main */
int main() {
    int x, num_termos, inteiro, sinal = 1;
    
    printf("Programa que imprime N termos da serie Inverte Sinal:   1 -2  3 -4  5  -6 ...\n\n");
    
    printf("Informe o numero de termos (numero de inteiro > 0): ");
    scanf("%d", &num_termos);
    
    printf("\nSerie inverte Sinal:\n\n");
    for (inteiro = 1; inteiro <= num_termos; inteiro++) {
        printf("%d  ", sinal * inteiro);
        sinal *= -1;   /*inverte sinal */
    }

    printf("\n\n");
    system("pause");
    return 0;
}


