/***********************************************************************************
 *  Programa que lan�a um dado N vezes e imprime um histograma referente           *
 *  a frequencia que cada face do dado foi lan�ada                                 *
 *  Utiliza-se um array para armazenar a frequencia de lan�amento: No elemento     *
 *  de posi��o 1 armazena-se a quantidade de vezes que a face 1 foi lan�ada,       *
 *  no elemento de posi��o 2 armazena-se a quantidade de vezes que a face 2        *
 *  foi lan�ada , ..., no elemento de posi��o 6 armazena-se a quantidade de        *
 *  vezes que a face 6 foi lan�ada.                                                *
 *  Dessa forma, o array tem 7 elementos. O elemento da posi��o 0 n�o � utilizado. *                         
 ***********************************************************************************/

#include <stdio.h>   
#include <stdlib.h>
#include <time.h>

#define CARACTERE_DA_BARRA 220 /* valor ASCII do caractere usado no histograma */

int lanca_dado(void);
void imprimeHistograma(int [], int, int);

int main() {
    int freq_face[7] = {0}; /* inicializa os contadores de ocorr�ncias de cada face */
    int num_lancamentos, face, vezes;
    
    printf("Programa que apresenta um histograma das ocorrencias de cada face de um dado\n"
           "em uma determinada quantidade de lancamentos:\n\n");  

    printf("Quantas vezes quer lancar o dado? ");  
    scanf("%d",&num_lancamentos);
 
    srand(time(NULL));
    
    for (vezes = 1; vezes <= num_lancamentos; vezes++)
        freq_face[lanca_dado()]++;
   
    printf("\n\nFace\tNum. Lancamentos\n");
    for (face = 1; face <= 6; face++)
       printf("\n%d\t%d", face, freq_face[face]);

    imprimeHistograma(freq_face, 1, 6);
    
    /* finaliza programa */
    printf ("\n\n");
    system ("pause");
    return 0;
}    

int lanca_dado(void) {
    
    return rand() % 6 + 1;
}

void imprimeHistograma(int frequencia[], int inicio, int fim){
     int face, caractere;     
     printf("\n\nElemto\tValor\tHistograma\n");          
     /* for externo percorre posi��es de frequencia
     o for interno imprime a quantidade de caracteres de acordo com frequencia[face] */
     
     for (face = inicio; face <= fim; face++){     
        printf("%d\t%d\t", face, frequencia[face]);        
        for(caractere = 1; caractere <= frequencia[face]; caractere++)
           printf("%c", CARACTERE_DA_BARRA);           
        printf("\n");
     }
}
