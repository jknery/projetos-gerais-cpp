#include<stdio.h>
#include<stdlib.h>

int main()
{
    int inv,res,num;
    
    printf("Digite Um Numero:");
    scanf("%d",&num);
    inv = 0;
    
    while(num!=0){
       res= num % 10;
       inv= inv * 10 + res;
       num /= 10;}
       
       printf("o numero eh: %d",inv);
       printf("\n\n\n");
       
       system("pause");
       return 0;
       }
       
    
    
