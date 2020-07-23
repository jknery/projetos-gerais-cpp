/* Programa que imprime a soma dos d�gitos de
   posi��o par para N n�meros inteiros positivos.
   Os d�gitos ser�o numerados a partir de 1 da
   direita para a esquerda
   Vers�o usando while na contagem */
#include <stdio.h>
#include <stdlib.h>

int main() {   
    int n, contador, numero, posicao, soma_digitos;   

    printf("Programa que imprime a soma dos digitos "
           "de posicao par para N numeros inteiros "
           "positivos:\n\n");
    printf("Entre com a quantidade de inteiros "
           "positivos a processar: ");
    scanf("%d", &n);
    for (contador = 1; contador <= n; contador++) {
        printf("\n\nEntre com um inteiro positivo: ");
        scanf("%d", &numero);
        if (numero < 10)
            printf("\nN�o existe digito de posicao par neste numero!\n");
        else {       
            numero /= 10; /* elimina o primeiro digito de posi��o impar */
            soma_digitos = 0;
            while (numero) {
                soma_digitos += (numero % 10); /* soma digito */
                numero /= 100; /* coloca na direita o pr�ximo d�gito de posi��o par*/
            }
            printf("\nSoma dos digitos de posi��o "
                   "par: %d\n", soma_digitos);
        }/* fim do if */        
    }/* fim do for */

    printf("\n\n");
    system("pause");
    return 0;
}
