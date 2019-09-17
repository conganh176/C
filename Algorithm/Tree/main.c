#include <stdio.h>
#include <stdlib.h>

typedef struct tree
{
    int data;
    struct tree* left;
    struct tree* right;
} Tree;


// create();


int main()
{
    Tree* root = (Tree*) malloc(sizeof(Tree));
    Tree* leftChild = (Tree*) malloc(sizeof(Tree));
    Tree* rightChild = (Tree*) malloc(sizeof(Tree));

    leftChild->data = 20;
    leftChild->left = leftChild->right = NULL;

    rightChild->data = 30;
    rightChild->left = rightChild->right = NULL;

    root->data = 10;
    root->left = leftChild;
    root->right = rightChild;


    //search
    int array[] = {69,96,66,99};
    int arrayCount = sizeof(array) / sizeof(int);


    int i;
    for (i = 0; i < arrayCount; i++)
    {
        Tree* newNode
    }


    return 0;
}