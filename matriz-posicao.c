#include <stdio.h>

int main() {
    float matriz[3][3];
    int i, j;

    printf("Endereços das posições da matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Endereço da posição (%d, %d): %p\n", i, j, (void*)&matriz[i][j]);
        }
    }

    return 0;
}

