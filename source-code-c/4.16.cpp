#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () 
{
    
    int x, y, z, w;
    printf("Insira um numero correspondente ao tamanho dos triangulos desejados: ");    
    scanf("%d", &w);
    
   /*TRIANGULO A*/
   
    printf("\n\n(A)\n");
    for(x=1;x<=w;x++){
    for(y=1;y<=x;y++){
    printf("*");}
    printf("\n");}
    
    /*TRIANGULO B*/
    
    printf("\n\n(B)\n");
    for(x=w;x>=1;x--){
    for(y=1;y<=x;y++){
    printf("*");}
    printf("\n");}
    
    /*TRIANGULO C*/
    
    printf("\n\n(C)\n");
    for(x=w; x>=1; x--){
    if(x!=w){
    for(z=x;z<=(w-1);z++){
    printf(" ");}
    }for(y = 1; y <= x; y++){
    printf("*");}
    printf("\n");}
    
    /*TRIANGULO D*/
    
    printf("\n\n(D)\n");
    for(x=1; x<=w; x++){
    if(x!=w){
    for(z=x;z<=(w-1);z++){
    printf(" ");}}
    for(y = 1; y <= x; y++){
    printf("*");}
    printf("\n");}
    
    printf("\n\n\n");
    system("pause");
    return 0;
}
