#include <stdio.h>

int main() {
    int vetor[5]; // Cria��o do vetor de inteiros com 5 elementos
    
    printf("Endere�o do vetor: %p\n", (void*)vetor); // Imprime o endere�o de mem�ria do vetor
    
    printf("Endere�o do primeiro elemento: %p\n", (void*)&vetor[0]); // Imprime o endere�o de mem�ria do primeiro elemento
    
    printf("Endere�o do segundo elemento: %p\n", (void*)&vetor[1]); // Imprime o endere�o de mem�ria do segundo elemento
    
    return 0;
}

