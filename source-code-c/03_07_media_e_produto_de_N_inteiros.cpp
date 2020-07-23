/* Programa que imprime o produto e a media de N
 inteiros lidos */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, num, cont, soma = 0, produto = 1; /* soma e produto tem que ter um valor inicial - elemento neutro */
    float media;
    
    printf("Impressao do produto e da media de N inteiros lidos:\n\n");
    
    printf("Qual o valor de N: ");
    scanf("%d", &n);

    printf("\nDigite os %d numeros:\n\n", n);
    for(cont = 1; cont <= n; cont += 1) {
        printf("Numero %d: ", cont);
        scanf("%d",&num);
        soma += num;     /* Acumula o numero no somatório */
        produto *= num; /* Acumula o numero no produtório */
    }
    
    media = soma / (float)n;
    
    
    printf("\nO produto dos numeros eh %d e a media eh %.2f\n", produto, media);
    
    printf("\n");
    system("pause");
    return 0;
}
