#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 46;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 57;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 66;
    current->link = NULL;
    head->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 99;
    current->link = NULL;
    head->link->link->link= current;

    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
    printf("NULL\n");

    return 0;
}