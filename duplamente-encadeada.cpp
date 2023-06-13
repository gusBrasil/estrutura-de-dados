#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Função para criar um novo nó
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Função para inserir um nó no início da lista
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

// Função para imprimir a lista em ordem reversa
void printListReverse(struct Node* head) {
    if (head == NULL) {
        printf("A lista está vazia.\n");
    } else {
        printf("Lista em ordem reversa: ");
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        while (current != NULL) {
            printf("%d ", current->data);
            current = current->prev;
        }
        printf("\n");
    }
}

// Função para imprimir a lista em ordem direta
void printList(struct Node* head) {
    if (head == NULL) {
        printf("A lista está vazia.\n");
    } else {
        printf("Lista em ordem direta: ");
        struct Node* current = head;
        while (current != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");
    }
}

// Função principal
int main() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    printList(head);            // Imprime: Lista em ordem direta: 1 2 3
    printListReverse(head);     // Imprime: Lista em ordem reversa: 3 2 1

    return 0;
}

