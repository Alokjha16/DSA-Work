#include<stdio.h>
#include<stdlib.h>

struct ll
{
    int data;
    struct ll *link;
};

int main(){
    struct ll *head = malloc(sizeof(struct ll));
    head->data = 46;
    head->link = NULL;

    struct ll *current = malloc(sizeof(struct ll));
    current->data = 55;
    current->link = NULL;
    head->link = current;

     struct ll *post = malloc(sizeof(struct ll));
    post->data = 77;
    post->link = NULL;
    head->link = post;

     struct ll *ppost = malloc(sizeof(struct ll));
    ppost->data = 99;
    ppost->link = NULL;
    head->link = ppost;

    struct ll *temp = head;
    struct ll *pe = current;
    struct ll *te = post;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        printf("%d -> ", pe->data);
        printf("%d -> ", te->data);

        temp = temp->link;
        pe =pe->link;
        te = te->link;
    }
    printf("NULL\n");

    return 0;
}