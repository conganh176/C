#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int data;
    struct node* next;
} Node;


Node* Head;


void create(int array[], int n);
void display(Node* p);
int length(Node* p);
void insert(Node* p,int data, int index);
int delete(Node* p, int index);


int main()
{
    int array[] = {1, 7, 0, 6, 9, 69, 34};
    int arrayCount = sizeof(array) / sizeof(array[0]);

    //Functions
    create(array, arrayCount);
    display(Head);

    insert(Head, 10, 5);
    delete(Head, 3);

    return 0;   
}


void create(int array[], int n)
{
    Node *current, *last;
    Head = (Node*) malloc(sizeof(Node));
    Head->data = array[0];
    Head->next = Head;
    last = Head;
    int i;

    for (i = 1; i < n; i++)
    {
        current = (Node*) malloc(sizeof(Node));
        current->data = array[i];
        current->next = last->next;
        last->next = current;
        last = current;
    }
}


void display(Node* h)
{
    printf("\nDisplay List: ");
    do
    {
        printf("%d ", h->data);
        h = h->next;
    } while (h != Head);
    printf("\n");
}


int length(Node* p)
{
    int len=0;

    do {
        len++;
        p = p->next;

    } while(p != Head);

    return len;
}


void insert(Node* p,int data, int index)
{
    printf("\n\nInsert number %d in the index %d of the list.", data, index);
    if (index < 0)
        return;
    
    Node* newNode = malloc(sizeof(Node));
    newNode->data = data;
    
    if (index == 0)
    {
        if(Head == NULL)
        {
            Head = newNode;
            Head->next = Head;
        }
        else
        {
            while (p->next != Head)
                p = p->next;
                
            p->next = newNode;
            newNode->next = Head;
            Head = newNode;
        }
    }
    else
    {
        int i;
        for (i = 0; i < index - 2 ; i++) 
            p=p->next;

        newNode->data = data;
        newNode->next = p->next;
        p->next = newNode;
    }

    display(Head);
}


int delete(Node* p, int index)
{
    printf("\n\nDelete number in the index %d of the list.", index);
    Node* q;
    int i, data;

    if (index < 0 || index > length(Head))
        return -1;

    if (index == 1)
    {
        while (p-> next != Head) 
            p=p->next;

        data = Head->data;
        if (Head == p)
        {
            free(Head);
            Head = NULL;
        }
        else
        {
            p->next=Head->next;
            free(Head);
            Head=p->next;
        }
    }
    else
    {
        for (i = 0; i < index - 2; i++)
            p=p->next;

        q = p->next;
        p->next = q->next;
        data = q->data;
        free(q);
    }
    display(Head);
    return data;
}