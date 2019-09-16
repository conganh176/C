#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
    struct node* prev; 
} Node;


Node* Head;


void create(int array[], int n);
void display(Node* p);
int length(Node* p);
void insert(Node* p, int data, int index);
void delete(Node* p, int index);
void reverse(Node* p);


int main()
{
    int array[] = {1, 7, 0, 6, 9, 69, 34};
    int arrayCount = sizeof(array) / sizeof(array[0]);
    
    create(array, arrayCount);
    display(Head);
    printf("\nLength: %d", length(Head));

    insert(Head, 96, 0);
    insert(Head, 66, 20);
    insert(Head, 34, 7);

    delete(Head, 0);
    delete(Head, 69);
    delete(Head, 4);

    reverse(Head);

    return 0;
}


void create(int array[], int n)
{
    Node *current, *last;
    int i;

    Head = (Node*) malloc(sizeof(Node));
    Head->data = array[0];
    Head->prev = Head->next = NULL;
    last = Head;

    for (i = 0; i < n; i++)
    {
        current = (Node*) malloc(sizeof(Node));
        current->data = array[i];
        current->next = last->next;
        current->prev = last;
        last->next = current;
        last = current;
    }
}


void display(Node* p)
{
    printf("\nDisplay list: ");
    while(p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}


int length(Node* p)
{
    int len = 0;

    while(p)
    {
        len++;
        p = p->next;
    }

    // printf("\nLength: %d", len);
    return len;
}


void insert(Node* p, int data, int index)
{
    printf("\n\nInsert number %d in the index %d of the list.", data, index);
    if (index < 0 || index > length(Head))
    {
        printf("\nInvalid index!");
        return;
    }
    
    Node* newNode = malloc(sizeof(Node));
    newNode->data = data;
    
    if (index == 0)
    {
        newNode->next = Head;
        newNode->prev = NULL;
        Head->prev = newNode;
        Head = newNode;
    }
    else
    {
        int i;
        for (i = 0; i < index - 1; i++)
            p = p->next;

        newNode->prev = p;
        newNode->next = p->next;

        if (p->next)
            p->next->prev = newNode;

        p->next = newNode;
    }

    display(Head);
    printf("\nLength: %d", length(Head));
}


void delete(Node* p, int index)
{
    printf("\n\nDelete number in the index %d of the list.", index);
    if (index < 0 || index > length(p))
        return;
    
    Node* currentNode = p;
    
    if (index == 0)
    {
        Head = Head->next;
        if (Head)
            Head->prev = NULL;

        free(currentNode);
    }
    else
    {
        int i;
        for (i = 0; i < index; i++)
            currentNode = currentNode->next;
        
        currentNode->prev->next = currentNode->next;
        if (currentNode->next)
            currentNode->next->prev = currentNode->prev;

        free(currentNode);
    }
    display(Head);
    printf("\nLength: %d", length(Head));
}


void reverse(Node* p)
{
    printf("\n\nReverse list.");
    Node* temp;
    
    while (p)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;

        if (p && p->next == NULL)
            Head = p;
    }
    display(Head);
}