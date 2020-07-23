/* Simulador de Craps */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rola_dados(void);

int main() {
    int placar, soma, ponto;

    printf( "Simulador de Craps:\n\n" );
    srand(time(NULL));
    soma = rola_dados();  /* primeiro lançamento dos dados */
    switch (soma) {
        case 7:
        case 11:  /* ganha na primeira rodada */
            placar = 1;
            break;
        case 2:
        case 3:
        case 12:  /* perde na primeira rodada */
            placar = 2;
            break;
        default:  /* armazena pontos */
            placar = 0;
            ponto = soma;
            printf( "\nO total de pontos eh %d\n\n", ponto );
            break;
    }
    while (placar == 0) {  /* continua jogando */
        soma = rola_dados();
        if (soma == ponto)       /* vence fazendo ponto */
            placar = 1;
        else if (soma == 7)
            placar = 2;
    }
    if (placar == 1)
        printf( "O jogador venceu!\n\n" );
    else 
        printf( "O jogador perdeu!\n\n" );

    system("pause");
    return 0;
}

int rola_dados(void) {
    int dado1, dado2, soma;

    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    soma = dado1 + dado2;
    printf( "O jogador lancou %d + %d = %d pontos\n", dado1, dado2, soma );

    return soma;
}
