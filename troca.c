#include <stdio.h>

void troca(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float a, b;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Valores originais: a = %.2f, b = %.2f\n", a, b);

    troca(&a, &b);

    printf("Valores trocados: a = %.2f, b = %.2f\n", a, b);

    return 0;
}

