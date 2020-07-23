/* Programa que imprime os números primos existentes
   num intervalo dado */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int inicio, fim, numero, divisor, conta_divisores;
    
    printf("Imprime os numeros primos existentes num"
           " intervalo dado [Inicio, Fim]:\n\n");

    printf("Informe Inicio e Fim do intervalo: ");
    scanf("%d%d", &inicio, &fim);
    
    /* Gera os números e imprie os que são primos */
    printf("\n\nNumeros Primos existentes no "
           "intervalo [%d, %d]", inicio, fim);
    for(numero = inicio; numero <= fim; numero++) {
        for(conta_divisores = 0, divisor = 1;
            divisor <= numero; divisor++)
            if(numero % divisor == 0)
                conta_divisores++;                
        if(conta_divisores == 2)
            printf("\n%d", numero);
    }
    
    printf("\n\n");
    system("pause");
    return 0;
}
