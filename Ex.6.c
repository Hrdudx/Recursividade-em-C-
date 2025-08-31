#include <stdio.h>
#include <ctype.h>

int contarVogais(char *str) {
    if (*str == '\0') {
        return 0;
    }
    int ehVogal = (tolower(*str) == 'a' || tolower(*str) == 'e' ||
                   tolower(*str) == 'i' || tolower(*str) == 'o' ||
                   tolower(*str) == 'u');
    return ehVogal + contarVogais(str + 1);
}

int main() {
    char frase[] = "programacao";
    printf("A frase tem %d vogais.\n", contarVogais(frase));
    return 0;
}