/* Programa que verifica se os numeros s�o ou n�o primos.
   O Programa para quando � lido um n�mero n�o positivo */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, divisor, conta_divisores;
    
    printf("Verifica se um numero eh ou nao primo:\n\n");

    /* Leitura para o primeiro numero */    
    printf("Qual o valor do numero. Para encerrar digite um valor nao positivo: ");
    scanf("%d", &numero);
    while(numero > 0){
        /*conta divisores do n�mero lido */
        for (conta_divisores = 0, divisor = 1; divisor <= numero; divisor++)
            if(numero % divisor == 0)
                conta_divisores++;
        /*determina se o n�mero � ou n�o primo */        
        if (conta_divisores == 2)
            printf("\nEste numero eh primo!\n", numero);
        else
            printf("\nEste numero nao eh primo!\n", numero);
        /* Leitura para o proximo numero */    
        printf("Qual o valor do numero. Para encerrar digite um valor nao positivo: ");
        scanf("%d", &numero);
    }
    
    printf("\n\n");
    system("pause");
    return 0;
}
