/*Programa que explora a fun��o GETCHAR() e o c�digo ASCII dos caracteres 
  ASCII - American Standard Code for Information Interchange */
#include <stdio.h>
#include <stdlib.h>
main(){
    char caractere;

    printf("Este programa imprime o codigo ASCII de cada caractere digitado pelo usuario\n\n");

    printf("Digite um caractere seguido de <Enter>. Para parar, digite <Ctrl+Z> seguido de <Enter>: ");
    caractere = getchar();   /* armazena em caractere o caractere lido pela fun��o getchar */
    while (caractere != EOF){/* EOF � a constante da biblioteca padr�o que indica fim de arquivo */
        printf("\nO codigo ASCII de %c eh %d\n\n",caractere, caractere);
        printf("Digite um caractere seguido de <Enter>. Para parar, digite <Ctrl+Z> seguido de <Enter>: ");
        caractere = getchar();
    }
     
    printf("\n\n");
    system("pause");
    return 0;
} 
 
    
