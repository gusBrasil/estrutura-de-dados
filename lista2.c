#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura de nó da lista
struct Node {
    char pokemon[20];
    struct Node* next;
};

// Função para adicionar um nó no fim da lista
void append(struct Node** head, char* pokemonName) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;
    strcpy(newNode->pokemon, pokemonName);
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Função para verificar se duas listas são iguais
int areListsEqual(struct Node* head1, struct Node* head2) {
    while (head1 != NULL && head2 != NULL) {
        if (strcmp(head1->pokemon, head2->pokemon) != 0) {
            return 0;
        }

        head1 = head1->next;
        head2 = head2->next;
    }

    // As duas listas devem ter o mesmo tamanho para serem iguais
    if (head1 == NULL && head2 == NULL) {
        return 1;
    } else {
        return 0;
    }
}

// Função para imprimir os elementos de uma lista
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%s ", head->pokemon);
        head = head->next;
    }
    printf("\n");
}

// Função para concatenar duas listas
struct Node* concatenateLists(struct Node* head1, struct Node* head2) {
    struct Node* result = NULL;

    // Caso uma das listas seja nula, retorna a outra lista
    if (head1 == NULL) {
        return head2;
    } else if (head2 == NULL) {
        return head1;
    }

    // Copia a primeira lista para a lista resultante
    result = head1;
    while (head1->next != NULL) {
        head1 = head1->next;
    }

    // Concatena a segunda lista à lista resultante
    head1->next = head2;

    return result;
}

int main() {
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;

    char pokemon[20];
    int i, n;

    printf("Quantos Pokemons deseja inserir na primeira lista? ");
    scanf("%d", &n);

    printf("Insira os nomes dos Pokemons da primeira lista:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", pokemon);
        append(&list1, pokemon);
    }

    printf("Quantos Pokemons deseja inserir na segunda lista? ");
    scanf("%d", &n);

    printf("Insira os nomes dos Pokemons da segunda lista:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", pokemon);
        append(&list2, pokemon);
    }

    // Verifica se as listas são iguais
    if (areListsEqual(list1, list2)) {
        printf("As listas sao iguais.\n");
    } else {
        printf("As listas sao diferentes.\n");
    }

    // Imprime as duas listas
    printf("Lista 1: ");
    printList(list1);
    printf("Lista 2: ");
    printList(list2);

    // Concatena as duas listas
    struct Node* concatenatedList = concatenateLists(list1, list2);

    // Imprime a lista concatenada
    printf("Lista concatenada: ");
    printList(concatenatedList);

    // Libera a memória alocada pelas listas
    struct Node* temp;
    while (list1 != NULL) {
        temp = list1;
        list1 = list1->next;
        free(temp);
    }
    while (list2 != NULL) {
        temp = list2;
        list2 = list2->next;
        free(temp);
    }
    while (concatenatedList != NULL) {
        temp = concatenatedList;
        concatenatedList = concatenatedList->next;
        free(temp);
    }

    return 0;
}

