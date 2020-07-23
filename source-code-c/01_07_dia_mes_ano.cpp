/* Este programa lê uma data no formato DDMMAAAA como um inteiro de oito  *
 * dígitos para uma única variável e imprime a data no formato dd/mm/aaaa */
#include <stdlib.h>
#include <stdio.h>

int main() {
    int data, dia, mes, ano;
    
    /* Finalidade do programa */
    printf("Imprime uma data lida como um unico inteiro no formato"
           " DDMMAAAA:\n\n");
    /* Lê o dado de entrada */
    printf("Digite a data no formato DDMMAAAA: "); 
    scanf("%d", &data); 
    
    /* Separa os dígitos do dia mes e ano */
    dia = data / 1000000;
    mes = data % 1000000 / 10000;
    ano = data % 10000;
    
    /* Imprime os resultados */
    printf("\n\nA data lida, no formato "
           "padrao, eh %02d/%02d/%04d", 
            dia, mes, ano);
 
    /* Finalização do programa */
    printf("\n\n\n");
    system("pause");
    return 0;
}
