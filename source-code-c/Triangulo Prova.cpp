#include<stdio.h>
#include<stdlib.h>

int main()
{
    int lin,numlin,astr,x1,x2,loop;
    printf("programa que faz um Triangulo!!");
    printf("Digite o Numero de Linhas:");
    scanf("%d",&numlin);
    
    lin = 1;
    
    for(loop=1;loop<=numlin;loop++){
        for(x1=1;x1<=(numlin-lin);x1++){
            printf(" ");}
        for(astr=1;astr<=(2*lin)-1;astr++)
            printf("*");
        for(x2=1;x2<=numlin-lin;x2++)
            printf(" ");
            
        printf("\n");
    
        lin++;
    }
    
    printf("\n\n");
    system("pause");
    return 0;
}                                
    
