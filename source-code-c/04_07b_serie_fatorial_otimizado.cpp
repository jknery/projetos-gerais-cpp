/* Programa que imprime o somatorio de N termos
   da serie: 1 + 1/1! + 1/2! + 1/3! .....\n\n
   Programa otimizado */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int fatorial, fator, n, cont,
        denominador = 0;
    float soma = 0;

    printf("Imprime somatorio de N termos da serie: 1 + 1/1! + 1/2! + 1/3! .....\n\n");
    
    /* Leitura do numero de termos da serie */
    printf("\nQuantos termos tera a serie? ");
    scanf("%d", &n);
   
    fatorial = 1; /* 0! -> primeiro termo = 1/0! */
    for (cont = 1; cont <= n; cont++) { 
        soma += (1 / (float)fatorial);    /*acumula o termo na soma */
        /* calculo do fatorial pr�ximo denominador */        
        fatorial *= ++denominador;    /* num! = (num - 1)! * num */      
    }    
    
    /* Impressao do somat�rio dos termos da serie */
    printf("\nO somatorio de %d termos da serie eh %.1f.", n, soma);
   
    printf("\n\n");
    system("pause");
    return 0;
}
