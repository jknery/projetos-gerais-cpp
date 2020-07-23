#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int int1 = 7, int2 = 2;
    
    printf("\nSoma: %d + %d = %d", int1, int2, int1 + int2);
    printf("\n\nSubtracao: %d - %d = %d", int1, int2, int1 - int2);   
    printf("\n\nMultiplicacao: %d * %d = %d", int1, int2, int1 * int2);
    printf("\n\nDivisao Inteira: %d / %d = %d", int1, int2, int1 / int2);
    printf("\n\nO resto da divisao (modulo): %d / %d = %d", int1, int2, int1 % int2); 
    printf("\n\nDivisao Exata:"
           "\nprecisa usar conversao explicita temporaria:"
           "\n (float)%d / (float)%d = %.2f",
           int1, int2, (float)int1 / (float)int2);   
    printf("\n\nRaiz quadrada de %d = %.2f", 25, sqrt(25));
    printf("\n\nPotencia 2^3 = %.2f", pow(2,3));                 

    printf("\n\n");
    system("pause");
    return 0;
}
    
