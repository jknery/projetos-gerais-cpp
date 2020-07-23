#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () 
{
    
    int x, y, z, som, med, prod;
    
        printf("Digite tres numeros inteiros: \n");
        printf("\tPrimeiro numero: ");
         scanf("%d", &x);
        printf("\tSegundo numero: ");
         scanf("%d", &y);
        printf("\tTerceiro numero: ");
         scanf("%d", &z);
        
            som = x + y + z;
            med = (x + y + z)/3;
            prod = x * y * z;
    
        printf("\nEntre os tres inteiros: %d %d %d", x, y, z) ;
        printf("\nA soma eh igual a: %d", som);
        printf("\nA media eh igual a: %d", med);
        printf("\nO produto eh igual a: %d", prod);    
    
    if(x < y && y > z)
        printf("\nO maior eh %d", y);
    if(y < x && x > z)
        printf("\nO maior eh %d", x);
    if(x < z && z > y)
        printf("\nO maior eh %d", z);
    
    if(x > y && y < z)
        printf("\nO menor eh %d", y);
    if(y > x && x < z)
        printf("\nO menor eh %d",x);
    if(x > z && z < y)
        printf("\nO menor eh %d", z);
    
printf("\n\n\n");
system("pause");
return 0;
    
}
