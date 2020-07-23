/* Este programa exemplifica o uso de Array de Ponteiros para cadeias de caracteres */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    char *naipe[] = {"Copas", "Paus", "Ouro", "Espadas"};
        
    printf("Este programa exemplifica o uso de Array de Ponteiros. Um array de strings eh\n"
           "implementado como um array de ponteiros. Exemplo:\n\n");
    printf("char *naipe[] = {\"Copas\", \"Paus\", \"Ouro\", \"Espada\"}\n\n");
    printf("Em C uma string eh um ponteiro para o primeiro caractere da string. Assim, cada\n"
           "elemento do array naipe eh um \"ponteiro para char\" e aponta para o primeiro caractere de sua string correspondente.\n\n");
    
    printf("Referenciando cada string (Notacao subscrito ou Ponteiro + Deslocamento):\n\n"); 
    printf("\t\t\t*naipe       = %s\n", *naipe);
    for (i = 0; i < 4; i++){            
       printf("naipe[%d] = %s  \t", i, naipe[i]); 
       printf("*(naipe + %d) = %s\n", i, *(naipe + i));  
    }     
    
    printf("\n\nCada elemento do array aponta para o endereco do 1o caractere da string correspondente:\n\n");
    printf("\t\t\t**naipe       = %c\n", **naipe);
    for (i = 0; i < 4; i++){  
      printf("*naipe[%d] = %c \t\t", i, *naipe[i]); /*Aponta para o end. do 1o caractere do string */
      printf("**(naipe + %d) = %c\n", i, **(naipe + i));  
    }  
              
    printf("\n\nReferenciando caracteres especificos de uma cadeia especifica.\n"            
           "Exemplo: naipe[3] = %s. Logo,\n", naipe[3]); 
    for(i = 0; naipe[3][i] != '\0'; i++) 
       printf("\n*(*(naipe + 3) + %d) = %c     *(naipe[3] + %d) = %c     naipe[3][%d] = %c",
               i, *(*(naipe + 3) + i), i, *(naipe[3] + i), i, naipe[3][i]);  
    
    printf("\n\n");
    system("pause");
    return 0;
}
      

