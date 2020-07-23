/* Este programa lê um inteiro de três dígitos e identifica a centena,
   a dezena e a unidade */
#include <stdlib.h>
#include <stdio.h>

int main() {
    int inteiro, centena, dezena, unidade;
    
    /* Finalidade do programa */
    printf("Identifica os digitos da centena, dezena e unidade de un inteiro"
           " de ate tres digitos:\n\n");
    /* Lê o dado de entrada */
    printf("Digite um inteiro de no maximo tres digitos: "); 
    scanf("%d", &inteiro); 
    
    /* Separa os dígitos da centena, dezena e unidade */
    centena = inteiro / 100;
    dezena  = inteiro % 100 / 10;
    unidade = inteiro % 10;
    
    /* Imprime os resultados */
    printf("\n\nO numero %d possui %d centena(s), %d dezena(s) e %d unidade(s)", 
            inteiro, centena, dezena, unidade);
 
    /* Finalização do programa */
    printf("\n\n\n");
    system("pause");
    return 0;
}
