/* Programa para determinar a classificaçao de um triangulo */
#include<stdlib.h>
#include<stdio.h>

int main() {
    float l1, l2, l3;

    printf("\n Determine os lados do triangulo: \n");
    printf("\n\n Primeiro Lado: ");
    scanf("%f", &l1);
    printf("\n\n Segundo Lado: ");
    scanf("%f", &l2);
    printf("\n\n Terceiro Lado: ");
    scanf("%f", &l3);
    if (l1 >= (l2 + l3) || l2 >= (l1 + l3) || l3 >= (l1 + l2))
        printf("\n\tOs Lados Fornecidos nao Formam um Triangulo\n");
    else {
        if (l1 == l2 && l2 == l3)
            printf("\n\t O Triangulo eh Equilatero\n");           
        else if (l1 != l2 && l1 != l3 && l2 != l3)
            printf("\n\tO Triangulo eh Escaleno\n");
        else 
            printf("\n\tO Triangulo eh Isoceles\n");
    }
    
    printf("\n\n\n");
    system("pause");
    return 0;
}    
