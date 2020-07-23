#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,fat,fator;
    printf("Digite UM Numero:");
    scanf("%d",&num);
    fat = 1;
    
    for(fator=1;fator<=num;fator++)
       fat*=fator;
       
       printf("Fatorial de %d eh:%d",num,fator);
       printf("\n\n\n");
       system("pause");
       return 0;
       }
    
