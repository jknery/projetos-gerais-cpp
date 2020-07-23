#include <stdio.h>   
#include <stdlib.h> 

int main (){
    char cadeia [] = "Cadeia de Caracteres";
    char *pont;
    int i;
    
    printf("cadeia = %s\n", cadeia);
    printf("\n\nA variavel cadeia foi declarada como um array de char. Portanto, cada caractere\n " 
           "pode ser referenciado com notacao de SUBSCRITO ou PONTEIRO/DESLOCAMENTO.\n"
           "(char cadeia []; char *pont; pont= cadeia;)\n\n");

    pont = cadeia;
    for(i = 0; cadeia[i] != '\0'; i++){
      printf("cadeia [%3d] = %c   ",     i, cadeia[i]);
      printf("pont [%3d] = %c   ",     i, pont[i]); 
      printf("*(cadeia + %3d) = %c  ",  i, *(cadeia + i)); /*IMPRIMEM O MESMO CONTEÚDO */ 
      printf("*(pont + %3d) = %c\n", i, *(pont + i));  
    }  
  
    printf("\n");   
    system("pause");
    return 0;
}   
