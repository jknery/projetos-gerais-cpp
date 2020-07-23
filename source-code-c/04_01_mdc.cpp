/* C�lculo do MDC pelo M�todo de Euclides: consiste em se efetuar divis�es 
   sucessivas at� obter resto zero, sendo que, enquanto isso n�o acontece, 
   o pr�ximo dividendo � o divisor anterior e o pr�ximo divisor � o resto 
   da divis�o anterior. Quando o resto � zero o MDC � o �ltimo divisor
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
