/* Programa que calcula o fatorial de varios
   numeros e parar quando encontra um numero
   negativo */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, num, fator, fatorial;
    
    printf("Calcula e mostra o fatorial de varios numeros"
           " e para quando encontra um numero negativo:\n\n");
    
    /* Leitura para o primeiro numero */       
    printf("Qual o valor do numero (digite um numero negativo para parar): ");
    scanf("%d", &num);
    while (num >= 0) {
        /* Calculo e impressão do fatorial */        
        for(fatorial = 1, fator = 1;
            fator <= num; fator++) 
            fatorial *= fator; /* Multiplica o fator para o fatorial */
        printf("\nO fatorial de %d eh %d.\n\n",
               num, fatorial);

        /* Leitura para o proximo numero */
        printf("Qual o valor do numero (digite um numero negativo para parar): ");
        scanf("%d", &num);
    } /* fim do while */
    
    printf("\n");
    system("pause");
    return 0;
}
