/*Este Programa lê um número e imprime o ordinal correspondente */
#include <stdio.h>
#include <stdlib.h>

main() {    
    int numero, unidade, dezena;
     
    printf("Digite um inteiro positivo menor que 100: ");
    scanf("%d", &numero);
    dezena = numero / 10;
    unidade = numero % 10;
    printf("\n\n%d em ordinal eh ", numero);
    if (dezena != 0)
        if (dezena == 1)
            printf("decimo ");
        else if (dezena == 2)
            printf("vigesimo ");
        else if(dezena == 3)
            printf("trigesimo ");
        else if (dezena == 4)
            printf("quadragesimo ");            
        else if(dezena == 5)
            printf("quinquagesimo ");
        else if (dezena == 6)
            printf("sexagesimo ");                         
        else if(dezena == 7)
            printf("septuagesimo ");
        else if (dezena == 8)
            printf("octagesimo ");
        else 
            printf("nonagesimo ");
         
    if (unidade != 0)
        if (unidade == 1)
            printf("primeiro");
        else if (unidade == 2) 
            printf("segundo");
        else if (unidade == 3)
            printf("terceiro");                                                    
        else if (unidade == 4)
            printf("quarto");                                                                                                       
        else if (unidade == 5)
            printf("quinto");  
        else if (unidade == 6)
            printf("sexto");  
        else if (unidade == 7)
            printf("setimo"); 
        else if (unidade == 8)
            printf("oitavo");
        else 
            printf("nono");
                        
     printf("\n\n\n");
     system("pause");
     return 0 ;    
}
