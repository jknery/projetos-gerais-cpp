/*Programa que lê uma nota verificando a validade do valor digitado*/ 
#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota;

    printf("Programa que le uma nota verificando a validade do valor digitado\n\n");    
    do {
        printf("Digite a nota da sua prova: ");
        scanf("%f", &nota);
        if(nota < 0 || nota >10)
           printf("\nNota Invalida!! Digite Novamente.\n\n");          
    } while (nota < 0 || nota > 10);

    printf("\nA nota lida foi %.1f\n\n", nota);
    
    system("pause");
    return 0;
}
