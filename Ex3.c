#include <stdio.h>

// Função que conta os dígitos de forma recursiva
int contarDigitos(long long int n) {
    if (n < 0) {
        n = -n;
    }
    if (n < 10) {
        return 1;
    }
    return 1 + contarDigitos(n / 10);
}

int main() {
    long long int numero;
    printf("Digite um numero inteiro: ");
    scanf("%I64d", &numero);   // <-- no Windows/MinGW use %I64d

    printf("O numero %I64d possui %d digitos.\n", numero, contarDigitos(numero));

    return 0;
}
