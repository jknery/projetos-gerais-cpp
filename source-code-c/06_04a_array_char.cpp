/***************************************************************************
 *  Programa que ler um string (array de caracteres), imprime o string     *
 *  lido, o tamanho do string e os caracteres separados por espa�o         *                                         *
 ***************************************************************************/

#include <stdio.h>   
#include <stdlib.h> 

#define TAM_MAX 20

int tamanho_string(char []);
void separa_caracteres(char[]);

int main() {
    char string[TAM_MAX];

    printf("Digite uma cadeia de caracteres sem brancos(encerra com <enter>):\n ");  
    scanf("%s", string); 
    /* pode ser usada a fun��o  gets(string). Essa fun��o ler toda a  
       string incluindo espa�os em branco e encerra a leitura com <enter> */
    printf("\nA cadeia de caracteres lida foi: %s\n ", string);       
    printf("\nTotal de caracteres = %d\n", tamanho_string(string));
    printf("\nOs caracteres sao:\n");
    separa_caracteres(string);    

    /* finaliza programa */
    printf ("\n\n");
    system ("pause");
    return 0;
}    

int tamanho_string(char s[]) {     /* s � o string recebido */
    int indice;

    /* '\0' � o caractere NULL. Ele indica fim do string */
    for (indice = 0; s[indice] != '\0'; indice++);   
    
    return indice;
}

void separa_caracteres(char s[]) {     /* s � o string recebido */
    int indice;

    /* '\0' � o caractere NULL. Ele indica fim do string */
    for(indice = 0; s[indice] != '\0'; indice++)
       printf("%c  ", s[indice]);
    
    return;
} 

