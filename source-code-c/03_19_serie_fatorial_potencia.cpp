/* Programa que imprime na tela os fatoriais de M numeros */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int fatorial, fator, n, cont, denominador;
    float soma, termo, x, potencia;
    printf("Imprime somatorio de N termos da serie: 1 + X^1/1! + X^2/2! + X^3/3! .....\n\n");
    
    /* Leitura do numero para o calculo do fatorial */
    printf("\nQual o valor de N? ");    
    scanf("%d", &n);
    printf("\nQual o valor de X? ");
    scanf("%d", &x);
   
    cont  = 0;
    soma  = 0;    
    termo = 1; 
    denominador = 0;
    fatorial = 1;        
    potencia = 1; 
    for (cont = 1; cont < n; cont++){ 
        soma +=  termo; /*acumula o termo na soma*?
        /* prepara o próximo termo */        
        potencia *= x;            /* num^n = num^(n-1) * n */
        denominador++;            /* denominador do próximo termo*/        
        fatorial *= denominador; /* num! = (num - 1)! * num */      
        /* prepara o próximo termo */ 
        termo =   1/(float)fatorial; /* novo termo a ser somado*/
    }    
    
    /* Impressao apos o fatorial calculado */
    printf("\nO somatorio de %d termos da serie eh %.1f.", n, soma);
        
   
    printf("\n\n");
    system("pause");
    return 0;
}
