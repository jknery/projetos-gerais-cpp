/*Programa que imprime os padrões de figuras dos exercícios 4.16 e 4.31 
  do livro do Deitel */
#include <stdlib.h>
#include <stdio.h>

main(){
    int opcao, tamanho_fig;
    int linha, asterisco, branco, num_brancos, num_asteriscos;
    
    do { /*Este Laço mais externo permite o usuário imprimir várias figuras */
        do {/*Este laço mais interno apresenta o Menu e le a opção do usuário. 
              Ele força o usuário a digitar uma opção válida*/
            system("cls");
            printf("\nEscolha a figura que deseja imprimir:\n");
            printf("\t\t1 - Triangulo Padrao 1\n");
            printf("\t\t2 - Triangulo Padrao 2\n");
            printf("\t\t3 - Triangulo Padrao 3\n");
            printf("\t\t4 - Triangulo Padrao 4\n");
            printf("\t\t5 - Losango\n");
            printf("\t\t6 - Finalizar o programa\n");         
            printf("\t\tOpcao: ");
            scanf("%d", &opcao);

            if (opcao < 1 || opcao > 6) {/* Se a opcão é inválida, avisa ao usuário */
                printf("\nOpcao invalida!!!\n\n");
                system("pause");
            }                
        } while (opcao < 1 || opcao > 6); /*Fim do DO WHILE interno */
        
        /* Se a opção não é Finalizar, deve ser informado o tamanho da figura */
        if (opcao != 6) {
            printf("\n\nDigite o tamanho da figura: ");
            scanf("%d",&tamanho_fig);
            system("cls");
            switch (opcao){  
            case 1: 
                printf("\n\nTriangulo Padrao 1:\n\n");
                for (linha = 1; linha <= tamanho_fig; linha++){ 
                    for (asterisco = 1; asterisco <= linha; asterisco++)
                        printf("*");   
                    printf("\n");
                }
                break;
            case 2: 
                printf("\n\nTriangulo Padrao 2:\n\n");
                for (linha = 1; linha <= tamanho_fig; linha++){ 
                    for (asterisco = tamanho_fig; asterisco >=  linha; asterisco--)
                        printf("*");   
                    printf("\n");
                }
                break;
            case 3: 
                printf("\n\nTriangulo Padrao 3:\n\n");
                for (linha = 1; linha <= tamanho_fig; linha++){      
                    for (branco = 1; branco < linha; branco++)
                        printf(" ");       
                    for (asterisco = tamanho_fig; asterisco >= linha; asterisco--)
                        printf("*");   
                    printf("\n");
                }
                break;
            case 4:
                printf("\n\nTriangulo Padrao 4:\n\n");
                for (linha = 1; linha <= tamanho_fig; linha++){      
                    for (branco = tamanho_fig; branco > linha; branco--)
                        printf(" ");       
                    for (asterisco = 1; asterisco <= linha; asterisco++)
                        printf("*");   
                    printf("\n");
                }
                break;
            case 5: 
                printf("\n\nLosango:\n\n");
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
                break;

           } /* Fim do SWITCH */                                        
           printf ("\n\n");
           system ("pause");
      }/* Fim do IF */           
    }while (opcao != 6); /*Fim do DO WHILE externo */

    return 0;
}

