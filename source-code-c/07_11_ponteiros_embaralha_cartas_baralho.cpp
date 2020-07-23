#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void embaralha(int [][13]);
void distribui_na_ordem_embaralhada (int [][13], char *[], char *[]);

int main(){
    char *naipe[4] = {"Copas", "Paus", "Ouro", "Espadas"};
    char *face[13] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete",
                      "Oito", "Nove", "Dez", "Valete", "Dama", "Rei"};   
    int baralho[4][13] = {0}; /*Matriz representando 4 nipes e 13 faces */
    
    srand(time(NULL));   
    embaralha(baralho);
    distribui_na_ordem_embaralhada(baralho, face, naipe);
    
    printf("\n\n");
    system("pause");
    return 0;
}
                 
void embaralha(int cartas[][13]) {
    int lin, col, carta;

    for (carta = 1; carta <= 52; carta++) {
        do {
            lin = rand() % 4 ;
            col = rand() % 13;
        } while (cartas[lin][col] != 0);
        cartas[lin][col] = carta;      
    }
    return;
}

void distribui_na_ordem_embaralhada (int cartas[][13], char *face[], char *naipe[]) {
    int  lin, col, carta;
    
    for (carta =1; carta <= 52; carta++) {
             
        for (lin = 0 ; lin < 4 ; lin++)
            for (col = 0; col < 13; col++)
                if (cartas[lin][col] == carta) 
                    printf("%s de %s\n",face[col], naipe[lin]);
    }
    return;
}           
