/*
 * Programa que ilustra passagem de argumentos por valor e por refer�ncia
 */
 
#include <stdio.h>
#include <stdlib.h>

void troca_por_valor(int, int);
void troca_por_referencia(int *, int *);

int main() {
    int x = 20, y = 30;
    
    printf("Programa que ilustra passagem de argumentos por valor e por referencia\n\n");
    printf("\n\nAntes de chamar troca_por_valor:                 X = %d e Y = %d", x, y);
    troca_por_valor(x, y); /*Passagem por valor:  os argumentos s�o os VALORES das Vari�veis */
    printf("\n\nDepois de executar troca_por_valor(x, y):        X = %d e Y = %d", x, y); 
       
    printf("\n\nAntes de chamar troca_por_referencia:            X = %d e Y = %d", x, y);
    troca_por_referencia(&x, &y); /*Passagem por Refer�ncia: os argumentos s�o os ENDERE�OS das Vari�veis */
    printf("\n\nDepois de executar troca_por_referencia(&x, &y): X = %d e Y = %d", x, y); 

    printf("\n\n\n");
    system("pause");
    return 0; 
}

/* Troca o conte�do das VARI�VEIS LOCAIS, var1 e var2  
   Observe que var1 e var2 recebem c�pias dos valores de x e y, respectivamente */
void troca_por_valor(int var1, int var2) { 
    int aux;
    
    aux = var1;
    var1 = var2;
    var2 = aux;
    return;
}

/* Troca o conte�do das vari�veis apontadas por pont1 e pont2 
   Observe que pont1 e pont2 recebem endere�os (refer�ncias) das vari�veis x e y */
void troca_por_referencia(int *pont1, int *pont2) {
    int aux;
    
    aux = *pont1;
    *pont1 = *pont2;
    *pont2 = aux;
    return;
}
