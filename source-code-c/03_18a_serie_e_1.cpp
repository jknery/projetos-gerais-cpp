/* Programa que imprime o somatorio de N termos da serie: e = 1 + 1/1! + 1/2! + 1/3! + 1/4!... */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, cont, denominador, numerador, fator, fat_denominador;
    float soma, termo;
    printf("Programa que imprime somatorio de N termos da serie: e = 1 + 1/1! + 1/2! + 1/3! + 1/4!...\n\n");
    
    /* Ler a quantidade de termos a ser somado*/
    printf("\nQual o valor de N (N >= 1)? ");
    scanf("%d", &n);

    /*Inicializa variáveis */
    soma  = 0;    
    numerador = 1; 
    denominador = 0;
        
    /* Soma os N termos da série */
    for(cont = 1; cont <= n; cont++){ 
        /* cálcula o fatorial do numerador */ 
        fat_denominador = 1;
        for(fator = 1; fator <= denominador; fator++)
           fat_denominador *= fator; 
        /* calcula o próximo termo */
        termo = 1/(float)fat_denominador;
        /*acumula o termo em soma*/
        soma = soma + termo;         
        /* atualiza denominador do próximo termo a ser somado */
        denominador++;
    }    
    
    /* Imprime soma dos N termos */
    printf("\nO somatorio de %d termos da serie eh %.2f", n, soma);
        
    /* Finaliza Programa */
    printf("\n\n\n");
    system("pause");
    return 0;
}
