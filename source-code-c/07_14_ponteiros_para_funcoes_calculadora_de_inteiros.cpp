#include <stdio.h>
#include <stdlib.h>

void mostra_menu(void);   
int soma(int, int);                /* protótipos das funções */
int subtrai(int, int);             
int multiplica(int, int);          
int divide(int, int);              


int main() {
    double opcao, inteiro1, inteiro2, resultado;    
    double (*func_0peracao[])(int, int) = {soma, subtrai, multiplica, divide};    
    
    do {
        do {
            mostra_menu();           
            printf("\t\tOpcao: ");
            scanf("%d", &opcao);                   
            if (opcao < 1 || opcao > 5) {
                printf("\nOpcao invalida! ... Redigite os dados.\n\n");
                system("pause");
            }
        } while (opcao < 1 || opcao > 5);

        if (opcao != 5) {
            printf("\n\t\tInforme dois inteiros: ");
            scanf("%d %d", &inteiro1, &inteiro2);           
            if (inteiro2 == 0 && opcao == 4)
               printf("\n\t\tNao eh possivel dividir por zero.\n");
            else {
               resultado = (func_0peracao[opcao - 1])(inteiro1, inteiro2);
               printf("\n\n\t\tO resultado da operacao solicitada eh  %d.\n\n\n", resultado);
            }               
        }

        printf("\n");
        system("pause");
    
    } while (opcao != 5);

    return 0;
}

/* função mostra_menu */
void mostra_menu(void) {

    system("cls");
    printf("\nCalculadora de oparacoes basicas para numeros inteiros:\n\n");
    printf("\nEscolha uma das seguintes opcoes:\n\n");
    printf("\t\t1 - Adicao\n");
    printf("\t\t2 - Subtracao\n");
    printf("\t\t3 - Multiplicacao\n");
    printf("\t\t4 - Divisao Inteira\n");
    printf("\t\t5 - Finalizar o programa\n\n");
    return;
}

/* função soma */
int soma(int operando1, int operando2) {

    return operando1 + operando2;
}

/* função subtrai */
int subtrai(int operando1, int operando2) {

    return operando1 - operando2;
}

/* função multiplica */
int multiplica(int operando1, int operando2) {

    return operando1 * operando2;
}

/* função divide */
int divide(int operando1, int operando2) {

    return operando1 / operando2;
}
