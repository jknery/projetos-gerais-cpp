/* Imprime os numeros de 0 a 15 em Binario */

#include <stdio.h>
#include <stdlib.h>

void imprime_num_em_binario(int);

int main() {
    int num;

    printf("ROTINA QUE CONVERTE UM NUMERO INTERIRO DECIMAL EM BINARIO:\n\n");
    printf("DIGITE UM NUMERO INTEIRO DECIMAL A SER CONVERTIDO: ");
    scanf("%d",&num);
    
        printf("\n%d\t", num);
        imprime_num_em_binario(num);
    

    printf("\n\n");
    system("pause");
    return 0;
}

/* FUNÇÃO QUE IMPRIME UM INTEIRO DECIMAL EM BINÁRIO...MÉTODO TRADICIONAL */
void imprime_num_em_binario(int num){

    if (num >= 2)  
        imprime_num_em_binario(num/2);
    printf("%d", num % 2); 
    
}

