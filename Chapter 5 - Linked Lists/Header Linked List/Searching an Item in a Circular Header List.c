#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int INFO;
    struct Node *LINK;
};

void Search(struct Node *START, int ITEM)
{
    struct Node *PTR, *LOC;

    PTR = START->LINK;

    while (PTR->INFO != ITEM && PTR != START)
    {
        PTR = PTR->LINK;
    }

    if(PTR->INFO==ITEM)
    {
        LOC=PTR;
    }
    else
    {
        LOC=NULL;
    }

    if (LOC!=NULL)
        printf("Item found: %d\n", PTR->INFO);
    else
        printf("Item not found\n");
}

int main()
{
    struct Node *START, *Header, *N1, *N2, *N3;
    int ITEM;

    Header = malloc(sizeof(struct Node));
    Header->LINK = Header;
    START = Header;

    N1 = malloc(sizeof(struct Node));
    N2 = malloc(sizeof(struct Node));
    N3 = malloc(sizeof(struct Node));

    N1->INFO = 10;
    N2->INFO = 20;
    N3->INFO = 30;

    START->LINK = N1;
    N1->LINK = N2;
    N2->LINK = N3;
    N3->LINK = START;

    printf("Enter item to search: ");
    scanf("%d", &ITEM);

    Search(START, ITEM);

    return 0;
}
