/* 
   C�lculo do MMC(x,y) por adi��es sucessivas: O m�todo sup�e inicialmente que
   o MMC �  o valor de X, sendo que enquanto o MMC n�o divide exatamente Y, 
   o MMC deve ser aumentado de X. 
*/
#include <stdio.h>
#include <stdlib.h>

main() {
    int primeiro, segundo, auxiliar, mmc;
           
    printf("Calculo do minimo multiplo comum (MMC) de inteiros positivos:\n\n");
    printf("Informe os dois inteiros positivos:\n");
    scanf("%d %d", &primeiro, &segundo);
    
    if (primeiro > segundo) { /* otimiza��o - faz a parcela da soma   */
        auxiliar = primeiro;  /* ser o valor maior. Isto faz diminuir */
        primeiro = segundo;   /* o mumero de somas e o c�lculo do MMC */
        segundo = auxiliar;   /* torna-se mais r�pido                 */
    }
    
    mmc  = segundo;    
    while (mmc % primeiro != 0)
       mmc += segundo;
    printf("\nMMC = %d\n", mmc);            

    printf("\n\n");
    system("pause");
    return 0;
}
