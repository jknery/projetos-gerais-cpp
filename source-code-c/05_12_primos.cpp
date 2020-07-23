/*Programa que imprime os números primos existentes no intervalo [N, M]
  Sendo M e N fornecidos pelo usuário
*/

#include <stdio.h>
#include <stdlib.h>

void imprime_primos_no_intervalo(int, int);

int main() {
    int m, n;

    printf("Programa que imprime os primos existentes no intervalo [M, N].\n\n");
    printf("Informe o valor de M: ");
    scanf("%d", &m);
    printf("Informe o valor de N: ");
    scanf("%d", &n);

    imprime_primos_no_intervalo(m, n);

    printf("\n\n");
    system("pause");
    return 0;
}

void imprime_primos_no_intervalo(int inicio, int fim) {
    int eh_primo(int);
    int numero;

    for (numero = inicio; numero <= fim; numero++)
        if (eh_primo(numero))
            printf("%d  ", numero);

    return;
}

int eh_primo(int num) {
    int div, conta_div = 0;
    int eh_divisor(int, int);

    for(div = 1; div <= num; div++)
       if (eh_divisor(div,num))
          conta_div++;
    return conta_div == 2 ? 1 : 0;
}

int eh_divisor(int div, int num) {
    
    return num % div ? 0 : 1;
}

