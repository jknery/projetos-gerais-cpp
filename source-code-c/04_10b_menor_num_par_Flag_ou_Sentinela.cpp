/*Programa que le vários numeros no intervalo [-9999, 9999] e mostra o menor numero par lido 
  Versão usando while no controle da sentinela. While é o laço mais adequado para 
  controle de sentinela. Pois, o laço poderá ser executado zero ou várias vezes */
#include <stdlib.h>
#include <stdio.h>

int main () {
    int num, menor_par = 10000;
    
    printf("Programa que ler varios numeros no intervalo [-9999, 9999] e "
           "mostra o menor numero   par lido.\n\n ");

    /*Laço controlado por sentinela (ou flag). Neste exemplo a sentinela é um numero 
      fora do intervalo [-9999, 9999] */
    printf("\nDigite um numero no intervalo [-9999, 9999]. Para encerrar, digite um numero    fora do intervalo : ");
    scanf("%d", &num);      
    while(num >= -9999 && num <= 9999){
        if(num % 2 == 0 && num < menor_par) /*se o número é par e é menor que o valor de menor_par */ 
            menor_par = num;                /*então menor_par passa a ser esse número*/ 
        printf("\nDigite um numero no intervalo [-9999, 9999]. Para encerrar, digite um numero    fora do intervalo : ");
        scanf("%d", &num);
    }
    
    if(menor_par == 10000) /*se menor_par permanece com o valor inicial, não foi digitado numer par */
      printf("\n\nNao foi digitado nenhum numero par!\n\n");
    else 
      printf("\n\nO menor numero par digitado foi: %d \n\n", menor_par);
    
    system("pause");
    return 0;
}
