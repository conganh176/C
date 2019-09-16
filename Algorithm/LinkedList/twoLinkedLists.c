#include <stdio.h>
#include <stdlib.h>


typedef struct node 
{
    int data;
    struct node* next;
} Node;


Node* HeadA;
Node* HeadB;
Node* HeadC;


void createA(int array[], int n);
void createB(int array[], int n);
void display(Node* p);
void merge(Node* a, Node* b);


int main()
{
    int arrayA[] = {1, 7, 0, 6, 9, 69, 34};
    int arrayB[] = {2, 8, 1, 7, 10, 70, 35};

    int arrayCountA = sizeof(arrayA) / sizeof(arrayA[0]);
    int arrayCountB = sizeof(arrayB) / sizeof(arrayB[0]);

    //Functions
    createA(arrayA, arrayCountA);
    createB(arrayB, arrayCountB);

    display(HeadA);
    display(HeadB);

    merge(HeadA, HeadB);
    display(HeadC);

    return 0;   
}


void createA(int array[], int n)
{
    Node *current, *last;
    HeadA = (Node*) malloc(sizeof(Node));
    HeadA->data = array[0];
    HeadA->next = NULL;
    last = HeadA;
    int i;

    for (i = 1; i < n; i++)
    {
        current = (Node*) malloc(sizeof(Node));
        current->data = array[i];
        current->next = NULL;
        last->next = current;
        last = current;
    }
}


void createB(int array[], int n)
{
    Node *current, *last;
    HeadB = (Node*) malloc(sizeof(Node));
    HeadB->data = array[0];
    HeadB->next = NULL;
    last = HeadB;
    int i;

    for (i = 1; i < n; i++)
    {
        current = (Node*) malloc(sizeof(Node));
        current->data = array[i];
        current->next = NULL;
        last->next = current;
        last = current;
    }
}


void display(Node* p)
{
    printf("\nDisplay List: ");
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}


void merge(Node* a, Node* b)
{
    Node *last;

    if (a->data < b->data)
    {
        HeadC = last = a;
        a = a->next;
        HeadC->next = NULL;
    }
    else
    {
        HeadC = last = b;
        b = b->next;
        HeadC->next = NULL;
    }

    while(a && b)
    {
        if (a->data < b->data)
        {
            last->next = a;
            last = a;
            a = a->next;
            last->next = NULL;
        }
        else
        {
            last->next = b;
            last = b;
            b = b->next;
            last->next = NULL;
        }
    }

    if (a) last->next = a;
    if (b) last->next = b;

    printf("\n\nMerge 2 linked lists");
}