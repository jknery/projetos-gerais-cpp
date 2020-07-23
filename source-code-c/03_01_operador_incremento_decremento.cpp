/* Demostra a aplicação dos operadores de incremento e decremento */
#include <stdio.h>
#include <stdlib.h>

int main () {

    int numero = 10;
 
    printf("Demostracao da aplicação dos operadores de incremento e decremento:\n\n");
    
    printf("\nnumero = %d\n", numero);
    
    numero++;
    printf("\nnumero = %d, apos comando numero++.", numero);

    ++numero;
    printf("\nnumero = %d, apos comando ++numero.", numero);
    
    numero--;
    printf("\nnumero = %d, apos comando numero--.", numero);

    --numero;
    printf("\nnumero = %d, apos comando --numero.", numero);
    
    printf("\n\nimprime numero++ = %d", numero++);  /*imprime depois incrementa*/  
    printf("\nimprime numero = %d", numero);
        
    printf("\n\nimprime numero-- = %d", numero--);   /*imprime depois decrementa*/ 
    printf("\nimprime numero = %d", numero);
    
    printf("\n\nimprime ++numero = %d", ++numero); /*incrementa e depois imprime*/

    printf("\n\nimprime --numero = %d", --numero); /*decrementa e depois imprime*/            
           
    printf("\n\n");
    system("pause");
    return 0;
}  
    
    
