/* Exemplo de  randomiza��o */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {    
    int cont, face_dado, vezes;      
    
    printf("Programa que simula Lancamentos de um Dado.\n\n");
    
    printf("Quantas vezes quer lancar o dado? ");
    scanf("%d", &vezes);
    
    srand(time(NULL));      /* srand() randomiza uma semente para rand(); 
                               time(NULL) retorna o tempo que o programa foi compilado. � 
                               necess�rio #include <time.h> */
    
    printf("\n Lancamentos:\n");
    for (cont = 1; cont <= vezes; cont++) {
    
        face_dado = rand() % 6 + 1;  /* a) rand() retorna um n�mero aleat�rio de 0 a 32767 
                                   b) rand() % 6 o resto dessa divis�o ser� entre 0 e 5
                                   c) 1 + rand() % 6 resulta em valores de 1 a 6 */
        printf("Lancamento %2d: %d \n\n",cont, face_dado);
    }
    
    /* Sugerir exerc�cios:
     a) Qual a ocorr�ncia de cada face? 
     b) Simular Lan�amento-1 e Lan�amento-2 feito por dois jogadores e determinar 
        quem ganhou ou se empataram. */
        
    printf("\n\n");
    system("pause");
    return 0;
}
