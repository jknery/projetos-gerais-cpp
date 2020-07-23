/*Programa que ler N numeros no intervalo [-9999, 9999] e mostra o menor numero par lido 
   Vers�o usando for na contagem */
#include <stdlib.h>
#include <stdio.h>

int main () {
    int num, n, cont, menor_par = 10000;/*assume que o menor valor � um valor maior que qualquer valor do
                         intervalo. Isto garante que qualquer valor do intervalo ser� menor este.*/
    printf("Programa que le N numeros no intervalo [-9999, 9999] e mostrar o menor numero par lido:");
    printf("\n\nDigite o valor de N: ");
    scanf("%d", &n);
    
    /*La�o controlado por contador */
    for(cont = 0; cont < n; cont++){
        printf("\nDigite um numero no intervalo [-9999, 9999]: ");
        scanf("%d", &num);
        if(num % 2 == 0 && num < menor_par) /*se o n�mero � par e � menor que o valor de menor_par */ 
            menor_par = num;                /*ent�o menor_par passa a ser esse n�mero*/ 
    }
    
    if(menor_par == 10000) /* se menor_par permanece com o valor inicial, n�o foi digitado numero par */
        printf("\n\nNao foi digitado nenhum numero par!\n\n");
    else 
        printf("\n\nO menor numero par digitado foi: %d \n\n", menor_par);
    
    system("pause");
    return 0;
}

