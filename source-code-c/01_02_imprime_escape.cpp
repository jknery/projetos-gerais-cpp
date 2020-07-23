#include <stdio.h>  /* inclusão do arquivo de cabeçalho (header)
                       da biblioteca padrão de entrada e saida (stdio) */
#include <stdlib.h> /* inclusão arquivo de cabeçalho (header)
                       da biblioteca padrão (stdlib) */
int main() {
    printf("\n\n\nAlo!\tAlo!\tAlo Mundo!");  /* A \ (barra invertida)
                                                é o caractere de escape
                                                (faz algo diferente)
                                                \n : muda de linha;
                                                \t : vai para próxima
                                                posição de tabulação*/
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
