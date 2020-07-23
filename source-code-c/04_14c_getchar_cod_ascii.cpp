/*Programa que explora a função GETCHAR() e o código ASCII dos caracteres 
  ASCII - American Standard Code for Information Interchange */
#include <stdio.h>
#include <stdlib.h>

main() {
    char caractere;

    printf("Este programa imprime o codigo ASCII de cada caractere digitado pelo usuario\n\n");

    printf("Digite um caractere seguido de <Enter>. Para parar, digite <Ctrl+Z> seguido de <Enter>: ");
    /* O comando de atribuição pode ser incluido na expressão do while */
    while ((caractere = getchar())!= EOF) /* EOF é a constante da biblioteca padrão que indica fim de arquivo */
        if (caractere != '\n') { /* teste para ignorar tecla <enter> */
           printf("\nO codigo ASCII de %c eh %d\n\n",caractere, caractere);
           printf("Digite um caractere seguido de <Enter>. Para parar, digite <Ctrl+Z> seguido de <Enter>: ");
    }

    printf("\n\n");
    system("pause");
    return 0;
} 
 
    
