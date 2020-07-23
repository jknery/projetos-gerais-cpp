/* Programa que imprime na tela 10 vezes uma frase */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int cont; 
    
    /* Finalidade do programa */
    printf("Imprime 10 vezes uma frase:\n\n");
    /* Repete 10 vezes a execução do comando de impressão  */
    for (cont = 0; cont <= 10; cont = cont + 1) 
        printf("%02d Boa Tarde!\n", cont);

    printf("\n");
    system("pause");
    return 0;
}
