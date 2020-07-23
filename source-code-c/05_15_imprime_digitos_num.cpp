/* Programa que imprime separadamente os digitos de um inteiro,
   da esquerda para a direita e da direita para a esquerda */
   
#include <stdio.h>
#include <stdlib.h>

void imprime_digitos_do_numero(int);
void imprime_digitos_invertidos(int);
int num_inv(int);

int main() {
    int num;

    printf("Programa que imprime separadamente os digitos de um inteiro, "
           "da esquerda para a direita e da direita para a esquerda:\n\n");
    
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
  
    printf("\n\nOs digitos do numero lido sao:\n\n");
    imprime_digitos_do_numero(num);
    printf("\n\nOs digitos do numero impresso ao cotrario sao:\n\n");
    imprime_digitos_invertidos(num);

    printf("\n\n");
    system("pause");
    return 0;
}

/* Função que imprime separadamente os digitos de um inteiro,
   da esquerda para a direita */
void imprime_digitos_do_numero(int num){

    if (num  >= 10)  
      imprime_digitos_do_numero(num /10);
    printf("%d ", num % 10); 
    return;
}

/* Função que imprime separadamente os digitos de um inteiro,
   direita para a esquerda */
void imprime_digitos_invertidos(int num){

    printf("%d ", num % 10); 
    if (num >= 10)  
      imprime_digitos_invertidos(num /10);

    return;
}

