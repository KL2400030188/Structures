#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

void read() {
    struct node *newnode, *ptr;
    int ele;

    printf("\nEnter element: ");
    scanf("%d", &ele);

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = ele;
    newnode->next = NULL;

    if (start == NULL) {
        start = newnode;
    } else {
        ptr = start;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = newnode;
    }
}

void display() {
    struct node *ptr;
    ptr = start;

    printf("Linked List: ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int nodecount() {
    struct node *ptr;
    int count = 0;

    ptr = start;
    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }

    printf("Number of nodes: %d\n", count);
    return count;
}

int main() {
    int opt, n, i;

    while (1) {
        printf("\n1. Create\n");
        printf("2. Display\n");
        printf("3. Node count\n");
        printf("Enter your option: ");
        scanf("%d", &opt);

        switch (opt) {
            case 1:
                printf("Enter number of nodes: ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    read();
                }
                break;
            case 2:
                display();
                break;
            case 3:
                nodecount();
                break;
            default:
                printf("Invalid option\n");
                break;
        }
    }

    return 0;
}
