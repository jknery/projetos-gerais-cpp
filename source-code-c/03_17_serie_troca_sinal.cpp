/* Programa que imprime os N termos da serie: x -x x -x x -x .... */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x, cont;
    printf("Programa que imprime os N termos da serie: x -x x -x x -x ...\n\n");
    
    /* Ler a quantidade de termos a ser somado*/
    printf("\nQuais os valores de N e X? ");
    scanf("%d%d", &n,&x);
  
    /* Soma os N termos da série */
    for(cont = 0; cont < n; cont++){ 
       printf("%d ", x);
       x *= -1; /*inverte o sinal */
    }    
         
    /* Finaliza Programa */
    printf("\n\n");
    system("pause");
    return 0;
}
