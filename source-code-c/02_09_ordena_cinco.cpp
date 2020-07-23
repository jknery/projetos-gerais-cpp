/* Mostrar em ordem crescente cinco valores reais lidos em ordem qualquer */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float val1, val2, val3, val4, val5, aux;
    
    /* Finalidade do programa */
    printf("Mostrar em ordem crescente cinco valores reais lidos em ordem qualquer:\n\n");
    /* Leitura dos cinco números reais */
    printf("Digite cinco valores inteiros separados por espaços em branco: ");
    scanf("%f %f %f %f %f", &val1, &val2, &val3, &val4, &val5);
    printf("\n\nOs cinco valores na sequencia de leitura:\n\n");
    printf("%f %f %f %f %f\n\n", val1, val2, val3, val4, val5);
    /* Coloca o quinto valor na posição correta */
    if (val1 > val2) {
        aux = val1;
        val1 = val2;
        val2 = aux;
    } 
    if (val2 > val3) {
        aux = val2;
        val2 = val3;
        val3 = aux;
    } 
    if (val3 > val4) {
        aux = val3;
        val3 = val4;
        val4 = aux;
    } 
    if (val4 > val5) {
        aux = val4;
        val4 = val5;
        val5 = aux;
    } 
    /* Coloca o quarto valor na posição correta */
    if (val1 > val2) {
        aux = val1;
        val1 = val2;
        val2 = aux;
    } 
    if (val2 > val3) {
        aux = val2;
        val2 = val3;
        val3 = aux;
    } 
    if (val3 > val4) {
        aux = val3;
        val3 = val4;
        val4 = aux;
    } 
    /* Coloca o terceiro valor na posição correta */
    if (val1 > val2) {
        aux = val1;
        val1 = val2;
        val2 = aux;
    } 
    if (val2 > val3) {
        aux = val2;
        val2 = val3;
        val3 = aux;
    } 
    /* Coloca o segundo e o primeiro valores nas posições corretas */
    if (val1 > val2) {
        aux = val1;
        val1 = val2;
        val2 = aux;
    } 

    /* Imprime o maior valor lido */
    printf("\nOs cinco valores apos a ordenação:\n\n");
    printf("%f %f %f %f %f\n\n", val1, val2, val3, val4, val5);

    /* Finalização do programa */
    system("pause");
    return 0;
}
