#include<stdio.h>
#include<stdlib.h>

int main()
{
    int pen,ult,cont,n,prox;
    scanf("%d",&n);
    pen=0;
    ult=1;
    printf(" 0 \t 1");
    for(cont=13;cont<=n;cont++){
    prox=ult+1;
    printf("\t%d",prox);
    pen=ult;
    ult=prox
    ;}
    
    
    
    
    
    printf("\n\n");
    
    system("pause");
    return(0);
}
    
    
