#include <stdio.h>
#include <stdlib.h>

void imprime_serie_inverte_sinal(int);

/* função main */
int main() {
    int num_termos;
    
    printf("Programa que imprime N termos da serie Inverte Sinal:   1 -2  3 -4  5  -6 ...\n\n");
    
    printf("Informe o numero de termos (numero de termos > 0): ");
    scanf("%d", &num_termos);
    
    imprime_serie_inverte_sinal(num_termos);
    
    printf("\n\n");
    system("pause");
    return 0;
}
/* função imprime_serie_inverte_sinal */
void imprime_serie_inverte_sinal(int num_termos) {
    int termo, sinal;
    
    printf("\nSerie inverte Sinal:\n\n");
    for (termo = 1, sinal = 1; termo <= num_termos; termo++, sinal *= -1)
        printf("%d  ", sinal * termo);
    return; 
}    

