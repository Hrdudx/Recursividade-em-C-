#include <stdio.h>

int triangular(int n) {

    if (n == 1) {
        return 1;
    } 
   
    else {
        return n + triangular(n - 1);
    }
}

int main() {
    int n;
    printf("Digite um numero inteiro para calcular o numero triangular: ");
    scanf("%d", &n);
    printf("O numero triangular de %d é: %d\n", n, triangular(n));
    return 0;
}