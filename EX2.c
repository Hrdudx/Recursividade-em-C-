#include <stdio.h>

int potencia(int a , int n) {
    if (n==0 ) {
        return 1;
    } 
   
    else {
        return a * potencia(a,n-1);
    }
}

int main() {
    int n, a;
    printf("Digite um numero inteiro para a base (a): ");
    scanf("%d", &a);
    printf("Digite o valor do expoente(n): ") ;
    scanf("%d", &n);    
   printf("A potencia de %d elevado a %d e igual a %d\n", a, n, potencia(a, n));
    return 0;
}