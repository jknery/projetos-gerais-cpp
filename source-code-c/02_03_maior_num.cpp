/*Determina qual maior dos cinco números lidos */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3, n4, n5, maior;
    
    /*Leitura dos cinco números */
    printf("Digite cinco inteiros: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    /*determina qual o maior valor lido */
    maior = n1;
    if (n2 > maior)
        maior = n2; 
    if (n3 > maior)
        maior = n3;
    if (n4 > maior)
        maior = n4; 
    if (n5 > maior)
        maior = n5; 
    /*imprime o maior valor lido */
    printf("\n\nO maior numero lido foi: %5d\n\n", maior);

    system("pause");
    return 0;

}
               
