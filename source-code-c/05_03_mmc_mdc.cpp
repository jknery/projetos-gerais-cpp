/* Cálculo do MDC pelo Método de Euclides: consiste em se efetuar divisões 
   sucessivas até obter resto zero, sendo que, enquanto isso não acontece, 
   o próximo dividendo é o divisor anterior e o próximo divisor é o resto 
   da divisão anterior. Quando o resto é zero o MDC é o último divisor
   
   Cálculo do MMC(x,y) por adições sucessivas: O método supõe inicialmente que
   o MMC é  o valor de X, sendo que enquanto o MMC não divide exatamente Y, 
   o MMC deve ser aumentado de X. 
*/

#include <stdio.h>
#include <stdlib.h>

#include "05_03_mmc_mdc.h" /* procura o arquivo no diretório do programa */

int main() {
    int num1, num2;
           
    printf("Informe dois inteiros positivos. (Para encerrar, inteiros nao positivos): ");
    scanf("%d %d", &num1, &num2);
    while(num1 > 0 && num2 > 0){
        printf("\nMDC = %d\n", mdc(num1, num2));
        printf("\nMMC = %d\n\n", mmc(num1, num2));            
        system("pause");       
        system("cls");
        printf("Informe dois inteiros positivos. (Para encerrar, inteiros nao positivos): ");
        scanf("%d %d", &num1, &num2);
    } 

    printf("\n");
    system("pause");
    return 0;
}

int mdc(int dividendo, int divisor){
    int resto;    
     
    while ((resto = dividendo % divisor) != 0){
       dividendo = divisor;
       divisor = resto;
       resto = dividendo % divisor;
    }    
    return divisor;
}

int mmc(int primeiro, int segundo){
    int minimo, auxiliar;
    
    if (segundo < primeiro) { /* otimização */
        auxiliar = primeiro;
        primeiro = segundo;
        segundo = auxiliar;
    }
    minimo  = primeiro;    
    while (minimo % segundo != 0)
       minimo += primeiro;
    
    return minimo;
}
