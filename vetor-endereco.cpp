#include <stdio.h>

int main() {
    int vetor[5]; // Criação do vetor de inteiros com 5 elementos
    
    printf("Endereço do vetor: %p\n", (void*)vetor); // Imprime o endereço de memória do vetor
    
    printf("Endereço do primeiro elemento: %p\n", (void*)&vetor[0]); // Imprime o endereço de memória do primeiro elemento
    
    printf("Endereço do segundo elemento: %p\n", (void*)&vetor[1]); // Imprime o endereço de memória do segundo elemento
    
    return 0;
}

