/* 
   Cálculo do MMC(x,y) por adições sucessivas: O método supõe inicialmente que
   o MMC é  o valor de X, sendo que enquanto o MMC não divide exatamente Y, 
   o MMC deve ser aumentado de X. 
*/
#include <stdio.h>
#include <stdlib.h>

main() {
    int primeiro, segundo, mmc;
           
    printf("Calculo do minimo multiplo comum (MMC) de inteiros positivos:\n\n");
    printf("Informe os dois inteiros positivos:\n");
    scanf("%d %d", &primeiro, &segundo);
    
    mmc  = segundo;    
    while (mmc % primeiro != 0)
       mmc += segundo;
    printf("\nMMC = %d\n", mmc);            

    printf("\n\n");
    system("pause");
    return 0;
}
