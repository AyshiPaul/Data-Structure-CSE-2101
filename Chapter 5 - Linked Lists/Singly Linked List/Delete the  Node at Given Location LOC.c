#include<stdio.h>
#include<stdlib.h>
struct NODE
{
    int INFO;
    struct NODE *LINK;
};
void DeleteNode(struct NODE *START, struct NODE *LOC, struct NODE *LOCP)
{
    struct NODE *PTR, *AVAIL;

    if (LOCP==NULL)
    {
        START= START->LINK;
    }
    else
    {
        LOCP->LINK=LOC->LINK;
    }


     printf("List after Delete the Node:\n");
    PTR=START;
    while(PTR!=NULL)
    {
        printf("%d\n", PTR->INFO);
        PTR=PTR->LINK;
    }

}
int main()
{
    struct NODE *START, *N1, *N2, *N3, *LOC, *LOCP;


    N1= malloc(sizeof(struct NODE));
    N2= malloc(sizeof(struct NODE));
    N3= malloc(sizeof(struct NODE));

    START=N1;
    N1->INFO=10;
    N1->LINK=N2;
    N2->INFO=20;
    N2->LINK=N3;
    N3->INFO=30;
    N3->LINK=NULL;

    LOC=N2;
    LOCP=N1;

    DeleteNode(START, LOC, LOCP);
    return 0;
}
