#include <stdio.h>
#include <stdlib.h>


typedef struct node 
{
    int data;
    struct node* next;
} Node;


void display(Node* p);
void count(Node* p);
void sum(Node* p);
void max(Node* p);
void search(Node* p, int key);


int main()
{
    int array[] = {1, 7, 0, 6, 9, 69, 34};
    int arrayCount = sizeof(array) / sizeof(array[0]);

    Node* Head;
    Node *current, *last;

    //Create List
    Head = (Node*) malloc(sizeof(Node));
    Head->data = array[0];
    Head->next = NULL;
    last = Head;

    int i;
    for (i = 1; i < arrayCount; i++)
    {
        current = (Node*) malloc(sizeof(Node));
        current->data = array[i];
        current->next = NULL;
        last->next = current;
        last = current;
    }

    //Functions
    display(Head);
    count(Head);
    sum(Head);
    max(Head);
    search(Head, 69);
    search(Head, 96);

    return 0;   
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


void count(Node* p)
{
    int num = 0;
    while (p != NULL)
    {
        num++;
        p = p->next;
    }
    printf("\nNumbers of nodes: %d", num);
}


void sum(Node* p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum = sum + p->data;
        p = p->next;
    }
    printf("\nSum of nodes: %d", sum);
}


void max(Node* p)
{
    int max = INT32_MIN;
    while (p)
    {
        if (p->data > max)
            max = p->data;

        p = p->next;
    }
    printf("\nMax number: %d", max);
}


void search(Node* p, int key)
{
    while (p)
    {
        if (key == p->data)
        {
            printf("\nData \"%d\" founded!", key);
            return;
        }

        p = p->next;
    }
    printf("\nNo data \"%d\" founded!", key);
}