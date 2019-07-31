#include <stdio.h>
#include <stdlib.h>

struct item
{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *i);
void printItem(struct item *i);

int main()
{
    struct item itm;
    struct item *pItem;

    pItem = &itm;

    pItem->itemName = (char *)malloc(30 * sizeof(char));

    if (pItem == NULL)
        exit(-1);

    readItem(pItem);
    printItem(pItem);

    free(pItem->itemName);

    return 0;
}

void readItem(struct item *i)
{
    printf("\nEnter product name: ");
    scanf("%s", i->itemName);

    printf("\nEnter price: ");
    scanf("%f", &i->price);

    printf("\nEnter quantity: ");
    scanf("%d", &i->quantity);

    i->amount = (float)i->quantity * i->price;
}

void printItem(struct item *i)
{
    printf("\nName: %s", i->itemName);
    printf("\nPrice: %.2f", i->price);
    printf("\nQuantity: %d", i->quantity);
    printf("\nAmount: %.2f", i->amount);
}
