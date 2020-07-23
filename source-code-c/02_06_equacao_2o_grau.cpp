#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>

/* Programa que calcula raizes de uma equação do 2o grau:
   aX**2 + bX + c
   se a = 0 não tem solução
   se a != 0  temos delta = b**2 - 4ac e  
      se delta negativo não existe raiz real 
      se delta = 0 só existe uma raiz real, x = -b / 2a
      se delta positivo existem duas raizes reais:
          (-b +- raiz(delta)) / (2* a);
*/

using namespace std;


int main() {
    double a, b, c, delta, x1, x2;
   
    char q;
    
    cout << sizeof(q) << " bytes" <<endl;
    
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);    
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    if (a == 0)
        printf("\n\nNao eh uma equacao do 2o grau");
    else {   
        delta = pow(b,2) - 4 * a * c;  
        if (delta < 0) 
            printf("\n\nNao existe raizes reais");
        else if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);   
            x2 = (-b - sqrt(delta)) / (2 * a); 
            printf("\n\nExistem duas raizes: x1 = %.1f e x2 = %.1f", x1, x2);
        } 
        else {
            x1 = -b / (2* a); 
            printf("\n\nExiste uma raiz: x = %.1f", x1);      
        }
    }               
            
    printf ("\n\n");
    system ("pause");
    return 0;
}

