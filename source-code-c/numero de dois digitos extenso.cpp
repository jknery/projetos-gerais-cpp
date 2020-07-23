#include<stdio.h>
#include<stdlib.h>

int main()
{
    int dez,unid,num;
    printf("Imprime um Numero por Extenso!\n");
    printf("Digite um Numero de dois digitos:");
    scanf ("%d",&num);
    
    dez=num/10;
    unid=num%10;
    
    if(dez!=0){
    
    switch(dez)
    {
               case 1 : switch(unid)
                        {
                             case 0 : printf("Dez");
                                      break;
                             case 1 : printf("Onze");
                                      break;
                             case 2 : printf("Doze");
                                      break;
                             case 3 : printf("Treze");
                                      break;
                             case 4 : printf("Catorze");
                                      break;
                             case 5 : printf("Quinze");
                                      break;
                             case 6 : printf("Dezesseis");
                                      break;
                             case 7 : printf("Dezessete");
                                      break;
                             case 8 : printf("Dezoito");
                                      break;
                             case 9 : printf("Dezenove");
                                      break;
                         }
               break;
                         
               case 2 : printf("Vinte");
                        break;
               case 3 : printf("Trinta");
                        break;
               case 4 : printf("Quarenta");
                        break;
               case 5 : printf("Cinquenta");
                        break;
               case 6 : printf("Sessenta");
                        break;
               case 7 : printf("Setenta");
                        break;
               case 8 : printf("Oitenta");
                        break;
               case 9 : printf("Noventa");
                        break;
                        
    }
    }
    
    if(dez>1){
       
           switch(unid){
                case 1 : printf(" e um");
                         break;
                case 2 : printf(" e dois");
                         break;
                case 3 : printf(" e tres");
                         break;
                case 4 : printf(" e quatro");
                         break;
                case 5 : printf(" e cinco");
                         break;
                case 6 : printf(" e seis");
                         break;
                case 7 : printf(" e sete");
                         break;
                case 8 : printf(" e oito");
                         break;
                case 9 : printf(" e nove");
                         break;
    }
}

    printf("\n\n");
    system("pause");
    return 0;
}
                                      
       
