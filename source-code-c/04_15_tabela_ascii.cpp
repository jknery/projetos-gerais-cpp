/*Programa que imprime a Tabela de código ASCII - American Standard Code for Information Interchange*/
#include <stdio.h>
#include <stdlib.h>

main(){
     int codigo;

     printf("Programa que imprime a Tabela de código ASCII "
            "(American Standard Code for Information Interchange\n\n");

     printf("TABELA ASCII:\n");
     for (codigo = 0; codigo <= 255; codigo++){
         printf("%d\t%c\n",codigo, codigo);
         if (codigo % 20 == 0 && codigo != 0) 
            system("pause");
     }     

     printf("\n\n");
     system("pause");
     return 0;
} 
 
    
