/* Programa que imprime o somatorio de N termos
   da serie: 1 + X^1/1! + X^2/2! + X^3/3! ... */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int fatorial, fator, n, cont, denominador;
    float soma, termo, x, potencia;
    
    printf("Imprime somatorio de N termos da serie: 1 + X^1/1! + X^2/2! + X^3/3! .....\n\n");
    
    /* Leitura do numero de termos da serie */
    printf("\nQual a quantidade de termos da serie? ");    
    scanf("%d", &n);
    /* Leitura do valor de X */
    printf("\nQual o valor de X? ");
    scanf("%f", &x);
   
    soma  = 0;    
    termo = 1; 
    denominador = 0;
    fatorial = 1;        
    potencia = 1; 
    for (cont = 1; cont <= n; cont++) { 
        soma +=  termo;    /*acumula o termo na soma*?
        /* calcula o próximo termo */        
        denominador++;    /* denominador do próximo termo*/
        potencia *= x;    /* num^n = num^(n-1) * n */
        fatorial *= denominador;    /* num! = (num - 1)! * num */      
        termo = potencia / fatorial;    /* novo termo a ser somado*/
    }    
    
    /* Impressao do somatorio da serie */
    printf("\nO somatorio de %d termos da serie eh %.5f.", n, soma);
   
    printf("\n\n");
    system("pause");
    return 0;
}
