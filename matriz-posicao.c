#include <stdio.h>

int main() {
    float matriz[3][3];
    int i, j;

    printf("Endere�os das posi��es da matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Endere�o da posi��o (%d, %d): %p\n", i, j, (void*)&matriz[i][j]);
        }
    }

    return 0;
}

