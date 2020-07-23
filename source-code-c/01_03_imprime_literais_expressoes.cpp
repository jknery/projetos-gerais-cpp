#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    printf("\nSoma: 8 + 9 = %d", 8 + 9);
    printf("\n\nSubtracao: 15 - 18 = %d", 15 - 18);   
    printf("\n\nMultiplicacao: 7 x 2 = %d", 7 * 2);
    printf("\n\nDivisao Inteira: 7 / 2 = %d", 7 / 2);
    printf("\n\nO resto da divisao (modulo) de 7 / 2 = %d", 7 % 2); 
    printf("\n\nDivisao Exata: "
           "\nprecisa usar conversao explicita temporaria:"
           " 7 / 2 = %.2f", 7 / (float)2);   
    printf("\n\nRaiz quadrada de 3 = %.6f", sqrt(3));
    printf("\n\nPotencia 2 ^ 3 = %.2f", pow(2, 3));                 

    printf("\n\n");
    system("pause");
    return 0;
}
    
