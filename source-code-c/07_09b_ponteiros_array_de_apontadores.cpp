/* Este programa exemplifica o uso de Array de Ponteiros */

#include <stdio.h>
#include <stdlib.h>

int tamanho(char[]);

int main() {
    int indice;
    char *naipe[4] = {"Copas", "Paus", "Ouro", "Espadas"};
        
    printf("Este programa exemplifica o uso de Array de Ponteiros. Um array de strings eh\n"
           "implementado como um array de ponteiros. Exemplo:\n\n");
    printf("char *naipe[4] = {\"Copas\", \"Paus\", \"Ouro\", \"Espadas\"}\n\n");

    for (indice = 0; indice < 4; indice++)
       printf("\nstring[%d] = %s \ttamanho = %d",indice, naipe[indice], tamanho(naipe[indice])); 
    
    printf("\n\n");
    system("pause");
    return 0;
}
      
/* CODIGO USANDO SUBSCRITO 
int tamanho(char string[]) {          
    int i;

    for (i = 0; string[i] != '\0'; i++);   
    return i;  
}
*/

/* CODIGO USANDO PONTEIRO */
int tamanho(char *pont) { 
    int tamanho;

    for (tamanho = 0; *pont != '\0'; pont++)
        tamanho++;
    return tamanho;  
}
