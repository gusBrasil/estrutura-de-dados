#include <stdio.h>

int main() {
    int var1, var2;
    
    // Compara��o dos endere�os
    if (&var1 > &var2) {
        printf("A vari�vel var1 tem o maior endere�o.\n");
    } else {
        printf("A vari�vel var2 tem o maior endere�o.\n");
    }
    
    return 0;
}

