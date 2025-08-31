#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função que verifica se a string é um palíndromo (recursiva)
int palindromo(char str[], int inicio, int fim) {
    // 1. Caso base: A recursão chega ao fim
    // Se o índice de início for maior ou igual ao de fim, a frase é um palíndromo
    if (inicio >= fim) {
        return 1;
    }
    
    // 2. Passo recursivo: Pula caracteres que não são letras
    
    // Pula caracteres do início que não são letras
    if (!isalpha(str[inicio])) {
        return palindromo(str, inicio + 1, fim);
    }
    
    // Pula caracteres do fim que não são letras
    if (!isalpha(str[fim])) {
        return palindromo(str, inicio, fim - 1);
    }
    
    // 3. Compara as letras restantes
    
    // Converte os caracteres para minúsculas para a comparação
    if (tolower(str[inicio]) == tolower(str[fim])) {
        // Se as letras forem iguais, chama a função novamente para a parte interna
        return palindromo(str, inicio + 1, fim - 1);
    } else {
        // Se as letras forem diferentes, não é um palíndromo
        return 0;
    }
}

int main() {
    char frase[200];
    
    printf("Digite uma frase: ");
    // Usa fgets para ler a frase inteira, incluindo espaços
    fgets(frase, sizeof(frase), stdin);
    
    // Remove a quebra de linha adicionada por fgets
    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }
    
    // Chama a função de palíndromo
    if (palindromo(frase, 0, strlen(frase) - 1)) {
        printf("A frase e um palindromo.\n");
    } else {
        printf("A frase nao e um palindromo.\n");
    }
    
    return 0;
}     