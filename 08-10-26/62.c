#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list {
    int data;
    struct list *next;
} LIST;

// Function to create a new node
LIST* create_node(int value) {
    LIST *new_node = (LIST*)malloc(sizeof(LIST));
    if (!new_node) return NULL;
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}

// Function to append node to a list
void append(LIST **head, int value) {
    LIST *new_node = create_node(value);
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    LIST *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

// Search function provided in the problem statement
int find(int query, LIST *list) {
    while (list != NULL) {
        if (list->data == query) return 1;
        list = list->next;
    }
    return 0;
}

// Function to print a list
void print_list(LIST *head) {
    LIST *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

int main() {
    FILE *file = fopen("data.dat", "r");
    if (!file) {
        perror("Error opening data.dat");
        return 1;//ok
    }

    LIST *L1 = NULL;
    LIST *L2 = NULL;
    char line[256];

    // Read L1 values from line 1
    if (fgets(line, sizeof(line), file)) {
        char *token = strtok(line, " \t\r\n");
        while (token != NULL) {
            append(&L1, atoi(token));
            token = strtok(NULL, " \t\r\n");
        }
    }

    // Read L2 values from line 2
    if (fgets(line, sizeof(line), file)) {
        char *token = strtok(line, " \t\r\n");
        while (token != NULL) {
            append(&L2, atoi(token));
            token = strtok(NULL, " \t\r\n");
        }
    }
    fclose(file);

    printf("Original L1: ");
    print_list(L1);
    printf("Original L2: ");
    print_list(L2);

    // Problem Logic: Removes elements from L1 if they exist in L2
    LIST *ptr1 = L1;
    while (ptr1 != NULL && ptr1->next != NULL) {
        int query = ptr1->next->data;
        if (find(query, L2)) {
            LIST *temp = ptr1->next;
            ptr1->next = ptr1->next->next;
            free(temp);
        } else {
            ptr1 = ptr1->next;
        }
    }

    printf("\nModified L1: ");
    print_list(L1);

    // Count nodes remaining in L1
    int count = 0;
    LIST *temp = L1;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Remaining nodes count in L1: %d\n", count);

    return 0;
}

