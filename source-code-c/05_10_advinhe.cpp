/* Exemplo de  randomiza��o */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {    
    int numero_sorteado, palpite, cont = 0;
        
    srand(time(NULL));
    numero_sorteado = 1 + rand() % 50;
        
    printf("Foi sorteado um inteiro maior que zero e menor 51. Advinhe qual foi ... \n\n");  
    do {
        printf("Qual foi o numero? ");
        scanf ("%d",&palpite);
        if (palpite == numero_sorteado) 
           printf("Acertou!!!");
        else if (numero_sorteado < palpite)
            printf("\n O numero sorteado eh menor que esse .... tente outra vez. \n");  
        else 
            printf("\n O numero sorteado eh maior que esse .... tente outra vez. \n");  
       
        cont++;
        printf("\n\n");
        system("pause");
       
    } while (palpite != numero_sorteado && cont <= 8);
    
    if (cont <= 8)
      printf("Parab�ns!! O n�mero sorteado foi %d", numero_sorteado);
    else
      printf("Perdi a paci�ncia!!! O n�mero sorteado tinha sido ", numero_sorteado);   
    
    
    /* Sugerir novas vers�es: a) Quantos palpites o usu�rio forneceu para acertar o n�mero. 
       b) classificar o jogador como bom, m�dio ou ruim, dependendo da quantidade de tentativas.*/
        
    printf("\n\n");
    system("pause");
    return 0;
}

