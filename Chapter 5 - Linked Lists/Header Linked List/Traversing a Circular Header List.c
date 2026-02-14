#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    int INFO;
    struct NODE *LINK;
};

void Traverse(struct NODE *START)
{
    struct NODE *PTR;

    if (START->LINK == START)
    {
        printf("List is Empty\n");
        return;
    }

    PTR = START->LINK;

    while (PTR != START)
    {
        printf("%d\n", PTR->INFO);
        PTR = PTR->LINK;
    }
}

int main()
{
    struct NODE *START, *N1, *N2, *N3, *Header;

    Header = malloc(sizeof(struct NODE));
    Header->INFO = -1;
    Header->LINK = Header;
    START = Header;

    N1 = malloc(sizeof(struct NODE));
    N2 = malloc(sizeof(struct NODE));
    N3 = malloc(sizeof(struct NODE));

    N1->INFO = 10;
    N2->INFO = 20;
    N3->INFO = 30;

    START->LINK = N1;
    N1->LINK = N2;
    N2->LINK = N3;
    N3->LINK = START;

    Traverse(START);

    return 0;
}
