/* Programa que imprime o somatorio de N termos da serie: e = 1 + 1/1! + 1/2! + 1/3! + 1/4!... */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, cont, denominador, numerador, fator, fatorial_denominador;
    float soma, termo;
    printf("Programa que imprime somatorio de N termos da serie: e = 1 + 1/1! + 1/2! + 1/3! + 1/4!...\n\n");
    
    /* Ler a quantidade de termos a ser somado*/
    printf("\nQual o valor de N (N >= 1)? ");
    scanf("%d", &n);

    /*Inicializa variáveis */
    soma  = 0;    
    numerador = 1; 
    denominador = 0;
    fatorial_denominador = 1;    
    termo = 1;  /* 1o termo */
      
    /* Soma os N termos da série */
    for(cont = 1; cont <= n; cont++){ 
        /*acumula o termo em soma*/
        soma = soma + termo;         
        /* atualiza  denominador e calcula seu fatorial */ 
        denominador++;
        fatorial_denominador *= denominador; /*Lembrar que n! = (n-1)! * n */
        /* prepara o próximo termo */
        termo = 1/(float)fatorial_denominador;
    }    
    
    /* Imprime soma dos N termos */
    printf("\nO somatorio de %d termos da serie eh %.3f", n, soma);
        
    /* Finaliza Programa */
    printf("\n\n\n");
    system("pause");
    return 0;
}
