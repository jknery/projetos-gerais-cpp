/* C�lculo do MDC pelo M�todo de Euclides: consiste em se efetuar divis�es 
   sucessivas at� obter resto zero, sendo que, enquanto isso n�o acontece, 
   o pr�ximo dividendo � o divisor anterior e o pr�ximo divisor � o resto 
   da divis�o anterior. Quando o resto � zero o MDC � o �ltimo divisor
   
   C�lculo do MMC(x,y) por adi��es sucessivas: O m�todo sup�e inicialmente que
   o MMC �  o valor de X, sendo que enquanto o MMC n�o divide exatamente Y, 
   o MMC deve ser aumentado de X. 
*/

#include <stdio.h>
#include <stdlib.h>

#include "05_03_mmc_mdc.h" /* procura o arquivo no diret�rio do programa */

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
    
    if (segundo < primeiro) { /* otimiza��o */
        auxiliar = primeiro;
        primeiro = segundo;
        segundo = auxiliar;
    }
    minimo  = primeiro;    
    while (minimo % segundo != 0)
       minimo += primeiro;
    
    return minimo;
}
