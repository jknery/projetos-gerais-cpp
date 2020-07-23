#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprime_identificacao_das_cartas_na_ordem (char *[], char *[]);

int main(){

    char *naipe[4] = {"Copas", "Paus", "Ouro", "Espadas"};
    char *face[13] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete",
                      "Oito", "Nove", "Dez", "Valete", "Dama", "Rei"};   
    
    printf("IDENTIFICACAO DAS CARTAS NA ORDEM NATURAL\n");
    imprime_identificacao_das_cartas_na_ordem (face, naipe);
        
    printf("\n\n");
    system("pause");
    return 0;
}
      
/* VERSAO 1: Notação de Subscrito 
void imprime_identificacao_das_cartas_na_ordem (char *face[], char *naipe[]) {
    int  ind_naipe, ind_face;
    
    for (ind_naipe = 0 ; ind_naipe < 4 ; ind_naipe++) {
        for (ind_face = 0; ind_face < 13; ind_face++)
            printf("%s de %s\n",face[ind_face], naipe[ind_naipe]);
        printf("\n");
    }
    return;       
}               
*/

/* VERSAO 2: Notaçao usando ponteiro */
void imprime_identificacao_das_cartas_na_ordem (char *face[], char *naipe[]) {
   char  **pont_face, **pont_naipe; /* Apontadores para Apontadores de Caracteres */

    for (pont_naipe = naipe ; pont_naipe < naipe + 4; pont_naipe++){
        for (pont_face = face ; pont_face < face + 13; pont_face++)
            printf("%s de %s\n",*pont_face, *pont_naipe);
        printf("\n");
    }
    return;       
}                   
