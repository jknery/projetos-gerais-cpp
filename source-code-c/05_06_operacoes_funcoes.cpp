#include <stdio.h>
#include <stdlib.h>

#define MAX_OPC 5

void mostra_menu(void);            /* protótipo da função mostra_menu */
void executa_opcao(int, int, int); /* protótipo da função executa_opcao */
int soma(int, int);                /* protótipo da função soma */
int subtrai(int, int);             /* protótipo da função subtrai */
int multiplica(int, int);          /* protótipo da função multiplica */
int divide(int, int);              /* protótipo da função divide */


int main() {
    int opcao, inteiro1, inteiro2;
    
    do{ /* repetição da execução das operações */
    
        do { /* repetição da solicitação da opção */
            system("cls");
            
            mostra_menu();
            
            printf("\t\tOpcao: ");
            scanf("%d", &opcao);

            if (opcao < 1 || opcao > MAX_OPC) {
                printf("\nOpcao invalida! ... Redigite os dados.\n\n");
                system("pause");
            }

        } while (opcao < 1 || opcao > MAX_OPC);

        if (opcao == MAX_OPC)
            continue; /* desvia para o final da repetição */
            
        printf("\nInforme dois inteiros para serem operados aritmeticamente:\n");
        scanf("%d %d", &inteiro1, &inteiro2);
        
        executa_opcao(opcao, inteiro1, inteiro2);

        printf("\n");
        system("pause");

    } while (opcao != MAX_OPC);

    return 0;
}

/* função mostra_menu */
void mostra_menu(void) {

    printf("Calculadora que executa as quatro operacoes fundamentais:\n\n");
    printf("Escolha a operacao aritmetica que deseja fazer sobre os dois inteiros:\n");
    printf("\t\t1 - Adicao\n");
    printf("\t\t2 - Subtracao\n");
    printf("\t\t3 - Multiplicacao\n");
    printf("\t\t4 - Divisao\n");
    printf("\t\t5 - Finalizar o programa\n");

    return;
}

/* função executa_opcao */
void executa_opcao(int opcao, int operando1, int operando2) {

        switch (opcao) {
        
            case 1:
                printf("\nO resultado da soma de %d com %d eh %d.\n", operando1, operando2, soma(operando1, operando2));
                break;
            case 2:
                printf("\nO resultado da subtracao de %d menos %d eh %d.\n", operando1, operando2, subtrai(operando1, operando2));
                break;
            case 3:
                printf("\nO resultado da multiplicacao de %d por %d eh %d.\n", operando1, operando2, multiplica(operando1, operando2));
                break;
            case 4:
                if (operando2 != 0)
                   printf("\nO resultado da divisao de %d por %d eh %d.\n", operando1, operando2, divide(operando1, operando2));
                else 
                   printf("\nNao podemos dividir um numero por zero!\n"); 
                break;
        }
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
