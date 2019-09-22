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
int count(Node* p);
void sum(Node* p);
void max(Node* p);
void search(Node* p, int key);
// void insertHead(int data);
void insert(Node* p, int data, int index);
// void deleteHead();
void delete(Node* p, int index);
void checkSort(Node* p);


int main()
{
    int array[] = {1, 7, 0, 6, 9, 69, 34};
    int arrayCount = sizeof(array) / sizeof(array[0]);

    //Functions
    create(array, arrayCount);
    display(Head);
    count(Head);
    sum(Head);
    max(Head);
    search(Head, 69);
    search(Head, 96);

    // insertHead(13);
    insert(Head, 96, 4);
    insert(Head, 66, 10);
    insert(Head, 99, 0);

    delete(Head, 0);
    delete(Head, 6);
    delete(Head, 13);

    checkSort(Head);

    return 0;   
}


void create(int array[], int n)
{
    Node *current, *last;
    Head = (Node*) malloc(sizeof(Node));
    Head->data = array[0];
    Head->next = NULL;
    last = Head;
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


int count(Node* p)
{
    int num = 0;
    while (p != NULL)
    {
        num++;
        p = p->next;
    }
    printf("\nNumbers of nodes: %d", num);
    return num;
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


// void insertHead(int data)
// {
//     printf("\n\nInsert number %d in the head of the list.", data);
//     Node* newNode = malloc(sizeof(Node));
//     newNode->data = data;
//     newNode->next = Head;
//     Head = newNode;
//     display(Head);
//     count(Head);
//     sum(Head);
//     max(Head);
//     search(Head, 69);
//     search(Head, 96);
// }


void insert(Node* p,int data, int index)
{
    printf("\n\nInsert number %d in the index %d of the list.", data, index);
    if (index < 0)
        return;
    
    Node* newNode = malloc(sizeof(Node));
    newNode->data = data;
    
    if (index == 0)
    {
        newNode->next = Head;
        Head = newNode;
    }
    else
    {
        int currentIndex = 1;
        Node* currentNode = p;

        while(currentNode && index > currentIndex)
        {
            currentNode = currentNode->next;
            currentIndex++;
        }

        if (currentNode == NULL)
        {
            printf("\nUnvalid index!");
            return;
        }

        newNode->next = currentNode->next;
        currentNode->next = newNode;
    }
    display(Head);
    count(Head);
    sum(Head);
    max(Head);
    search(Head, 69);
    search(Head, 96);
}


void delete(Node* p, int index)
{
    printf("\n\nDelete number in the index %d of the list.", index);
    if (index < 0)
        return;
    
    Node* currentNode = p;
    
    if (index == 0)
    {
        Head = Head->next;
        free(currentNode);
    }
    else
    {
        Node* prevNode = NULL;
        int currentIndex = 0;

        while(currentNode && index > currentIndex)
        {
            prevNode = currentNode;
            currentNode = currentNode->next;
            currentIndex++;
        }

        if (currentNode == NULL)
        {
            printf("\nUnvalid index!");
            return;
        }

        prevNode->next = currentNode->next;
        free(currentNode);
    }
    display(Head);
    count(Head);
    sum(Head);
    max(Head);
    search(Head, 69);
    search(Head, 96);
}


void checkSort(Node* p)
{
    printf("\n\nCheck sorted list: ");
    int currentNum = INT32_MIN;

    while (p != NULL)
    {
        if (p->data < currentNum)
        {
            printf("false");
            return;
        }
        
        currentNum = p->data;
        p = p->next;
    }
    printf("true");
}
