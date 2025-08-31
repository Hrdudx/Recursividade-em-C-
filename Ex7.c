#include <stdio.h>

void sequenciaCollatz(int n) {
    printf("%d ", n);
    if (n == 1) {
        return;
    }
    if (n % 2 == 0) {
        sequenciaCollatz(n / 2);
    } else {
        sequenciaCollatz(3 * n + 1);
    }
}

int main() {
    int numero = 6;
    printf("Sequencia de Collatz para %d: ", numero);
    sequenciaCollatz(numero);
    printf("\n");
    return 0;
}