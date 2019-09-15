#include <stdio.h>
#include <stdlib.h>


typedef struct node 
{
    int data;
    struct node* next;
} Node;


void display(Node* p);


int main()
{
    int array[] = {1, 7, 0, 6, 9, 69};

    Node* Head;
    Node *current, *last;

    Head = (Node*) malloc(sizeof(Node));
    Head->data = array[0];
    Head->next = NULL;
    last = Head;

    int i;
    for (i = 1; i < 6; i++)
    {
        current = (Node*) malloc(sizeof(Node));
        current->data = array[i];
        current->next = NULL;
        last->next = current;
        last = current;
    }

    display(Head);

    return 0;   
}


void display(Node* p)
{
    while (p != NULL)
    {
        printf("%d", p->data);
        p = p->next;
    }
}

