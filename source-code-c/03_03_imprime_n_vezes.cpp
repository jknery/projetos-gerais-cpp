/* Programa que imprime na tela 10 vezes uma frase */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int cont, n; 
    
    /* Finalidade do programa */
    printf("Imprime N vezes uma frase:\n\n");
    
    /* Recebe o valor de N */
    printf("Informe o valor de N: ");
    scanf("%d", &n);
    
    /* Repete N vezes a execução do comando de impressão  */
    for (cont = 1; cont <= n; cont = cont + 1) 
        printf("%02d Boa Tarde!\n", cont);

    printf("\n");
    system("pause");
    return 0;
}
