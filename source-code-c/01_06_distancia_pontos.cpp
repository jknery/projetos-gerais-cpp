/* Este programa calcula a distancia entre dois pontos no plano */
#include <stdlib.h>
#include <stdio.h>
#include <math.h> /* inclui o arquivo cabeçalho (header) da biblioteca matemática */

int main() {
    float x1, x2, y1, y2, distancia;
    
    /* Finalidade do programa */
    printf("Calculo da distância entre dois pontos no plano:\n\n");
    /* Lê coodenadas dos pontos*/
    printf("Digite as coordenadas do Ponto1: "); 
    printf("\n\t x1: ");
    scanf("%f", &x1); 
    printf("\n\t y1: ");
    scanf("%f", &y1); 
    printf("\n\nDigite as coordenadas do Ponto2: "); 
    printf("\n\tx2: ");
    scanf("%f", &x2); 
    printf("\n\ty2: ");
    scanf("%f", &y2);     
        
    /* Calcula a distância entre os pontos */    
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));   
    
    /* Imprime resultado */
    printf("\n\nA distancia entre (%.1f, %.1f) e (%.1f, %.1f) eh %.1f",  
            x1,y1, x2, y2, distancia);
 
    /* Finalização do programa */
    printf("\n\n\n");
    system("pause");
    return 0;
}
