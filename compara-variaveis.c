#include <stdio.h>

int main() {
    int var1, var2;
    
    // Comparação dos endereços
    if (&var1 > &var2) {
        printf("A variável var1 tem o maior endereço.\n");
    } else {
        printf("A variável var2 tem o maior endereço.\n");
    }
    
    return 0;
}

