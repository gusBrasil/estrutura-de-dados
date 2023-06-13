#include <stdio.h>
#include <stdlib.h>

// Estrutura de um n� da lista
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Fun��o para imprimir a lista em ordem direta
void printForward(struct Node* head) {
    printf("Lista em ordem direta: ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Fun��o para imprimir a lista em ordem reversa
void printBackward(struct Node* tail) {
    printf("Lista em ordem reversa: ");
    while (tail != NULL) {
        printf("%d ", tail->data);
        tail = tail->prev;
    }
    printf("\n");
}

int main() {
    int n, num;
    struct Node* head = NULL;
    struct Node* tail = NULL;

    printf("Quantos n�meros deseja inserir na lista? ");
    scanf("%d", &n);

    printf("Digite os n�meros:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);

        // Criar um novo n�
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = num;
        newNode->prev = NULL;
        newNode->next = NULL;

        if (head == NULL) {
            // Se a lista estiver vazia, o novo n� se torna o head e o tail
            head = newNode;
            tail = newNode;
        } else {
            // Adicionar o novo n� no final da lista
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Imprimir a lista em ordem direta
    printForward(head);

    // Imprimir a lista em ordem reversa
    printBackward(tail);

    // Liberar a mem�ria alocada pelos n�s da lista
    struct Node* current = head;
    while (current != NULL) {
        struct Node* nextNode = current->next;
        free(current);
        current = nextNode;
    }

    return 0;
}

