#include <stdio.h>

int buscaBinaria(int vetor[], int inicio, int fim, int numero) {
    if (inicio > fim) {
        return -1;
    }
    int meio = inicio + (fim - inicio) / 2;
    if (vetor[meio] == numero) {
        return meio;
    }
    if (vetor[meio] > numero) {
        return buscaBinaria(vetor, inicio, meio - 1, numero);
    }
    return buscaBinaria(vetor, meio + 1, fim, numero);
}

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int n = 5;
    int resultado = buscaBinaria(vetor, 0, n - 1, 30);
    if (resultado != -1) {
        printf("Numero encontrado no indice %d.\n", resultado);
    } else {
        printf("Numero nao encontrado.\n");
    }
    return 0;
}