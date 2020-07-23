#include <stdio.h>
#include <stdlib.h>

int main () 
{
    
    int cout, pro;
    printf("\nO programa ira imprimir o produto entre os inteiros mpares de 1 a 15\n");   
    
    pro = 1;   
    for(cout = 1; cout <= 15; cout+=2)
             pro *= cout;                               
             
    printf("\nO produto eh %d\n\n", pro);
                 
    system("pause");
    return 0;
}
