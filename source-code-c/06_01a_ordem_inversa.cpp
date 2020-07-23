/* Programa que lê 10 numeros inteiros e os mostra na ordem inversa a de leitura */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    
    printf("Programa que mostra 10 numeros inteiros na ordem inversa a de leitura:\n\n");

    printf("Informe os 10 numeros: ");
    scanf("%d %d %d %d %d %d %d %d %d %d",
           &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);

    printf("Numeros lidos na ordem inversa: ");
    printf("\n");
    printf("%d %d %d %d %d %d %d %d %d %d\n",
           num10, num9, num8, num7, num6, num5, num4, num3, num2, num1);
    
    printf("\n\n");
    system("pause");
    return 0;
}
