#include<stdio.h>
#include<stdlib.h>
int main(){
    int numero, cont, numb,cout;
    
    printf("programa que imprime a quantidade de termos impares\n");
    printf("De um certo numero de cinco digitos");
    printf("\n\nDigite um Numero Por Favor:");
    
    scanf("%d",&numero);
    
    cout = 0;
    
    for(cont =1 ; cont<= 5 ; cont++){
          numb = numero % 10;
          
          if (numb % 2 != 0){cout++;}
          numero = numero / 10;}
    
    printf("\n\nO Numero de digitos impares eh : %d\n",cout);
    system("Pause");
    
    return 0;
}
