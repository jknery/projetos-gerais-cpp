/* Cálculo do MDC pelo Método de Euclides: consiste em se efetuar divisões 
   sucessivas até obter resto zero, sendo que, enquanto isso não acontece, 
   o próximo dividendo é o divisor anterior e o próximo divisor é o resto 
   da divisão anterior. Quando o resto é zero o MDC é o último divisor
*/
#include <stdio.h>
#include <stdlib.h>

main() {
    int dividendo, divisor, resto;
           
    printf("Calculo do maximo divisor comum (MDC) de dois inteiros positivos:\n\n");
    
    printf("Informe os dois inteiros positivos:\n");
    scanf("%d %d", &dividendo, &divisor);
    
    resto = dividendo % divisor; 
    while (resto != 0){
       dividendo = divisor;
       divisor = resto;
       resto = dividendo % divisor;
    }    
    printf("\nMDC = %d\n", divisor);

    printf("\n\n");
    system("pause");
    return 0;
}
