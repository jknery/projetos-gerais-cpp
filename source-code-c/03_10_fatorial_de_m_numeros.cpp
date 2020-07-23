/* Programa que imprime na tela os fatoriais
   de M numeros */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int vezes, m, num, fator, fatorial;
    
    printf("Calcula e mostra os fatoriais de M"
           " numeros:\n\n");
    
    printf("Informe o valor de M: ");
    scanf("%d", &m);
    
    /* Repete M vezes a execução do fatorial */
    for(vezes = 1; vezes <= m; vezes++) {
          
        /* Leitura do numero para o calculo do fatorial */
        printf("\nQual o numero para o calculo do fatorial: ");
        scanf("%d", &num);
        
        /* calculo do fatorial do numero lido */        
        for(fatorial = 1, fator = 1; fator <= num; fator ++)
            fatorial *= fator; /* Multiplica o fator para o fatorial */
        
        /* Impressao apos o fatorial calculado */
        printf("\nO fatorial de %d eh %d.\n", num, fatorial);
        
    }/* fim do for mais externo */
    
    printf("\n");
    system("pause");
    return 0;
}
