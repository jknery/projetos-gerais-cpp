/*Programa que imprime um losango */
#include <stdlib.h>
#include <stdio.h>

int main(){
    int tamanho_fig, linha, asterisco, branco, num_brancos, num_asteriscos;

    printf("Imprime figura de um Losango de tamanho especificado\n\n");
    printf("\n\nDigite o tamanho da figura (tem de ser impar): ");
    scanf("%d",&tamanho_fig);

    /* Parte superior do Losango */
    num_brancos = tamanho_fig /2;
    num_asteriscos = 1;
    for(linha = 1; linha <= tamanho_fig /2 + 1; linha ++) {
        for(branco = 1; branco <= num_brancos; branco++)
            printf(" ");
        for(asterisco = 1; asterisco <= num_asteriscos; asterisco ++)
            printf("*");
        num_brancos--;
        num_asteriscos += 2;
        printf("\n");
    }
    /* Parte inferior do Losango */
    num_brancos = 1;
    num_asteriscos = tamanho_fig /2 * 2 - 1;
    for(linha = 1; linha <= tamanho_fig /2; linha ++) {
        for(branco = 1; branco <= num_brancos; branco++)
            printf(" ");
        for(asterisco = 1; asterisco <= num_asteriscos; asterisco ++)
            printf("*");
        num_brancos++;
        num_asteriscos -= 2;      
        printf("\n");           
    } 
                        
    printf ("\n\n");
    system ("pause");
    return 0;
}

