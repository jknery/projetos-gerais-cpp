/*Programa que simula uma Mini_Calculadora com quatro operações. As 
  operações são apresentadas através de um "menu" */ 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao, inteiro1, inteiro2;
    
    do { /*Este Laço mais externo permite o usuário executar várias operações */
        do {/*Este laço mais interno apresenta o Menu e ler a opção do usuário. 
              Ele força o usuário a digitar uma opção válida*/
            system("cls"); /*limpa a tela para o menu sempre ser impresso no início da tela*/
            printf("\n\n\t\tMINI CALCULADORA\n\n");
            printf("\t\t1 - Adicao\n");
            printf("\t\t2 - Subtracao\n");
            printf("\t\t3 - Multiplicacao\n");
            printf("\t\t4 - Divisao\n");
            printf("\t\t5 - Finalizar o programa\n");
            
            printf("\n\n\t\tDigite o Numero da Opcao: ");
            scanf("%d", &opcao);
            if (opcao < 1 || opcao > 5) { /* Se a opcão é inválida, avisa ao usuário */
                printf("\nOpcao invalida!!!\n\n");
                system("pause"); /* pausa para o usuário lê mensagem */
            }
        }while (opcao < 1 || opcao > 5);/*Fim do DO WHILE interno */
        
        /* Se a opção não é Finalizar, deve ser informado os dois valores a serem operados */
        if (opcao  != 5){
           printf("\n\nInforme dois inteiros para serem operados aritmeticamente:\n");
           scanf("%d %d", &inteiro1, &inteiro2);
           /* De acordo com a opção, calcula operação e imprime o resultado */
            switch (opcao) {
                case 1:
                    printf("\nSoma: %d + %d = %d.\n", inteiro1, inteiro2, inteiro1 + inteiro2);
                    break;
                case 2:
                    printf("\nSubtracao: %d - %d = %d.\n", inteiro1, inteiro2, inteiro1 - inteiro2);
                    break;
                case 3:
                    printf("\nMultiplicacao: %d x %d = %d.\n", inteiro1, inteiro2, inteiro1 * inteiro2);
                    break;
                case 4:
                    if (inteiro2 != 0)
                       printf("\nDivisao: %d / %d = %d e o resto eh %d.\n", inteiro1, inteiro2,
                              inteiro1 / inteiro2, inteiro1 % inteiro2);
                    else 
                       printf("\nNao eh possivel dividir um numero por zero.\n"); 
                    break;
            }/*Fim do SWITCH */
            /*Pausa para o usuário olhar resultado impresso */    
            printf("\n");
            system("pause");
        }/*Fim do if */     
    } while (opcao != 5);/*Fim do DO WHILE externo */

    return 0;
}
