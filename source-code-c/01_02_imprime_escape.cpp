#include <stdio.h>  /* inclus�o do arquivo de cabe�alho (header)
                       da biblioteca padr�o de entrada e saida (stdio) */
#include <stdlib.h> /* inclus�o arquivo de cabe�alho (header)
                       da biblioteca padr�o (stdlib) */
int main() {
    printf("\n\n\nAlo!\tAlo!\tAlo Mundo!");  /* A \ (barra invertida)
                                                � o caractere de escape
                                                (faz algo diferente)
                                                \n : muda de linha;
                                                \t : vai para pr�xima
                                                posi��o de tabula��o*/
    printf("\n\nPara imprimir uma barra: \\ e uma aspa:\"  \n"); 
    
    printf("\nOiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii!!!"
           "\nTudo bem?"
           "\nObservou que usei apenas um printf?"
           "\nTambem poderia ter usado tres printf"); 
    printf("\n\n\nAtecao! Vamos fazer uma pausa e depois limpar a tela.\n");   
    system("pause");
    system("cls");
    printf("...Observou que limpamos a tela?");

    printf("\n");
    system("pause");
    return 0;
}   
