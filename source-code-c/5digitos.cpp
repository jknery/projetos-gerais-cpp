#include<stdio.h>
#include<stdlib.h>

int main()
{
    int dig,digi;
    printf("Programa para dizer quantos Numeros impares existem em um Numero de 5 Digitos!\n\n\n");
    printf("Digite um Numero de exatamente 5 Digitos:");
    scanf ("%d",&dig);
    digi=0;
    
    while(dig>=10000 && dig<=99999){
         if(dig%2==0){
         digi=dig/2;
         digi+1;
         printf("%d",digi);}

}
           
    
    
    system("pause");
    return 0;
}
         
