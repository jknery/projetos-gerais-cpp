/* Programa que imprime a tabuada de multiplicar do número lido */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int fator, num;
    
    printf("Programa que imprime a tabuada de multiplicar do numero lido\n\n");
    
    printf("Informe o numero: ");
    scanf("%d", &num);
    
    printf("\n\nTabuada de %d\n ", num);

    for (fator = 1; fator <= 100; fator += 1) 
        printf("\n%3d x %2d  = %3d", num, fator,
        num * fator);

  
    printf("\n\n");
    system("pause>>NULL");
    system("cls");
    
    printf("\n\n");
    return 0;
}
