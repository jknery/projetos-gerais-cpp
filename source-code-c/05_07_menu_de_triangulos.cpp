#include <stdio.h>
#include <stdlib.h>

void mostra_menu();    /* protótipo da função mostra_menu */
void executa_opcao(int, int);   /* protótipo da função executa_opcao */
int solicita_tamanho(void); /* prototipo de solicita_linhas */
void mostra_1(int);        /* protótipo da função soma */
void mostra_2(int);        /* protótipo da função subtrai */
void mostra_3(int);        /* protótipo da função multiplica */
void mostra_4(int);        /* protótipo da função divide */


int main() {
    int opcao = 0, tam_figura;
    
    do {
        do {
            mostra_menu();           
            printf("\t\tOpcao: ");
            scanf("%d", &opcao);
            if (opcao < 1 || opcao > 5) {
                printf("\nOpcao invalida! ... Redigite a opcao.\n\n");
                system("pause");
            }
        } while (opcao < 1 || opcao > 5);

        if (opcao != 5){
           printf("\nInforme o tamanho da figura a ser impressa: ");
           scanf("%d", &tam_figura);
           executa_opcao(opcao, tam_figura);
        }
      
        printf("\n");
        system("pause");                  
 
    } while (opcao != 5);

    return 0;
}

/* função mostra_menu */
void mostra_menu(void) {
    system("cls");
    printf("\nEscolha o numero do padrão que deseja mostrar:\n\n");
    printf("\t\t1 - (Padrao 1) *\n");
    printf("\t\t               **\n\n");
    printf("\t\t2 - (Padrao 2) **\n");
    printf("\t\t               *\n\n");
    printf("\t\t3 - (Padrao 3) **\n");
    printf("\t\t                *\n\n");
    printf("\t\t4 - (Padrao 4)  *\n");
    printf("\t\t               **\n\n");
    printf("\t\t5 - Finalizar o programa\n\n");
    return;
}

/* função executa_opcao */
void executa_opcao(int opcao, int tam_figura) {
        system("cls");
        switch (opcao) {      
            case 1:
                mostra_1(tam_figura);
                break;
            case 2:
                mostra_2(tam_figura);
                break;
            case 3:
                mostra_3(tam_figura);
                break;
            case 4:
                mostra_4(tam_figura);
                break;
        }
      return;
}

/* função mostra_1 */
void mostra_1(int num_lin) {
    int conta_lin, conta_ast;
    
    for (conta_lin = 1; conta_lin <= num_lin; conta_lin++) {
        for (conta_ast = 1; conta_ast <= conta_lin; conta_ast++)
            printf("*");
        printf("\n");
    }
    
    return;
}

/* função mostra_2 */
void mostra_2(int num_lin) {
    int conta_lin, conta_ast;
    
    for (conta_lin = 1; conta_lin <= num_lin; conta_lin++) {
        for (conta_ast = num_lin + 1 - conta_lin; conta_ast >= 1; conta_ast--)
            printf("*");
        printf("\n");
    }

    return;
}

/* função mostra_3 */
void mostra_3(int num_lin) {
    int conta_lin, conta_esp, conta_ast;
    
    for (conta_lin = 1; conta_lin  <= num_lin; conta_lin++) {
        for (conta_esp = 0; conta_esp < conta_lin - 1; conta_esp++)
            printf(" ");
        for (conta_ast = num_lin + 1 - conta_lin; conta_ast >= 1; conta_ast--)
            printf("*");
        printf("\n");
    }

    return;
}

/* função mostra_4 */
void mostra_4(int num_lin) {
    int conta_lin, conta_esp, conta_ast;
    
    for (conta_lin = 1; conta_lin  <= num_lin; conta_lin++) {
        for (conta_esp = num_lin - conta_lin; conta_esp >= 1; conta_esp--)
            printf(" ");
        for (conta_ast = 1; conta_ast <= conta_lin; conta_ast++)
            printf("*");
        printf("\n");
    }

    return;
}
