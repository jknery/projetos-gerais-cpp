/********************************************************
 *  Programa que le uma cadeia de caracteres e mostra:  *
 *       1) a quantidade de vogais da cadeia;           *
 *       2) a quantidade de cada letra diferente        *
 ********************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_CAD 1001

int eh_vogal(char);
int conta_vogais(char[]);
int eh_maiuscula(char);
int eh_minuscula(char);
void conta_letras(char[], int[]);
void mostra_contador_letras(int[]);

int main() {
    int array_conta_letras[26] = {0};
    char texto[MAX_CAD];

    printf("Programa que le uma cadeia de caracteres e mostra: "
           "a quantidade de vogais e a quantidade de cada letra diferente:\n\n");

    printf("Digite uma cadeia de ate %d caracteres:\n\n", MAX_CAD - 1);
    gets(texto);
    printf("\nCadeia lida:\n\n");
    printf("%s\n\n", texto);
    
    printf("Quantidade de vogais: %d\n\n", conta_vogais(texto));
    
    conta_letras(texto, array_conta_letras);
    mostra_contador_letras(array_conta_letras);

    printf("\n\n");
    system("pause");
    return 0;
}

int eh_vogal(char caractere) {

    if (caractere == 'A' || caractere == 'a' ||
        caractere == 'E' || caractere == 'e' ||
        caractere == 'I' || caractere == 'i' ||
        caractere == 'O' || caractere == 'o' ||
        caractere == 'U' || caractere == 'u')
        return 1;

     return 0;
}

int conta_vogais(char array[]) {
    int indice, contador_vogais = 0;
    
    for (indice = 0; array[indice] != '\0'; indice++)
        if (eh_vogal(array[indice]))
            contador_vogais++;
    return contador_vogais;
}

int eh_maiuscula(char caractere) {
    return  caractere >= 'A' && caractere <= 'Z' ? 1 : 0;
}

int eh_minuscula(char caractere) {
    return  caractere >= 'a' && caractere <= 'z' ? 1 : 0;
}

int eh_minuscula(char);

void conta_letras(char cadeia[], int array_conta_letras[]) {
    int indice;
    
    for (indice = 0; cadeia[indice] != '\0'; indice++)
        if (eh_maiuscula(cadeia[indice]))
            array_conta_letras[cadeia[indice] - 'A']++;
        else if (eh_minuscula(cadeia[indice]))
            array_conta_letras[cadeia[indice] - 'a']++;
    return;
}

void mostra_contador_letras(int array_conta_letras[]) {
    int letra;

    printf("Quantidade de cada letra:\n");
    for (letra = 0; letra < 26; letra++) {
        if (letra % 6 == 0)
            printf("\n");
        printf("%c = %3d     ", letra + 'A', array_conta_letras[letra]);
    }
    return;
}
