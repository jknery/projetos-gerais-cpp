/*
 * Programa que ilustra passagem de argumentos por valor e por referência
 */
 
#include <stdio.h>
#include <stdlib.h>

void troca_por_valor(int, int);
void troca_por_referencia(int *, int *);

int main() {
    int x = 20, y = 30;
    
    printf("Programa que ilustra passagem de argumentos por valor e por referencia\n\n");
    printf("\n\nAntes de chamar troca_por_valor:                 X = %d e Y = %d", x, y);
    troca_por_valor(x, y); /*Passagem por valor:  os argumentos são os VALORES das Variáveis */
    printf("\n\nDepois de executar troca_por_valor(x, y):        X = %d e Y = %d", x, y); 
       
    printf("\n\nAntes de chamar troca_por_referencia:            X = %d e Y = %d", x, y);
    troca_por_referencia(&x, &y); /*Passagem por Referência: os argumentos são os ENDEREÇOS das Variáveis */
    printf("\n\nDepois de executar troca_por_referencia(&x, &y): X = %d e Y = %d", x, y); 

    printf("\n\n\n");
    system("pause");
    return 0; 
}

/* Troca o conteúdo das VARIÁVEIS LOCAIS, var1 e var2  
   Observe que var1 e var2 recebem cópias dos valores de x e y, respectivamente */
void troca_por_valor(int var1, int var2) { 
    int aux;
    
    aux = var1;
    var1 = var2;
    var2 = aux;
    return;
}

/* Troca o conteúdo das variáveis apontadas por pont1 e pont2 
   Observe que pont1 e pont2 recebem endereços (referências) das variáveis x e y */
void troca_por_referencia(int *pont1, int *pont2) {
    int aux;
    
    aux = *pont1;
    *pont1 = *pont2;
    *pont2 = aux;
    return;
}
