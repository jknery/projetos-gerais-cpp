#include <stdio.h>
#include <stdio.h>

int main() {

    int x, y, z;	
    		
    printf("Digite tres numeros\n\n");   
    printf("\tPrimeiro numero: ");
     scanf("%d", &x);
    printf("\tSegundo numero: ");
     scanf("%d", &y);
    printf("\tTerceiro numero: ");
     scanf("%d", &z);

    printf("\n\n");
    
    if (x * x == y * y + z * z)
        printf("Os numeros formam um triangulo\n\n");
    else if ( y * y == x * x + z * z)
	    printf("Os numeros formam um triangulo\n\n");
    else if (z * z == x * x + y * y)
	    printf("Os numeros formam um triangulo\n\n");
    else
	    printf("Os numeros nao formam um triangulo\n\n");
	
    system("pause");
    return 0;
}
