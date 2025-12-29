#include<stdio.h>
#include<stdlib.h>
struct NODE
{
    int INFO;
    struct NODE *LINK;
};
void InsertFirst(struct NODE *ptr, struct NODE **AVAIL,struct NODE *LOC, int ITEM )
{
    struct NODE *NEW;
    if(*AVAIL==NULL)
    {
        printf("OVERFLOW\n");
        return ;
    }
    NEW=*AVAIL;
    *AVAIL=(*AVAIL)->LINK;
    NEW->INFO=ITEM;
    if(LOC==NULL)
    {
        NEW->LINK= ptr;
        ptr=NEW;
    }
    else
    {
        NEW->LINK=LOC->LINK;
        LOC->LINK=NEW;
    }
    printf("List After Insertion : \n");
    ptr=ptr->LINK;
    while(ptr!=NULL)
    {
        printf("%d ", ptr->INFO);
        ptr=ptr->LINK;
    }
}
int main()
{
    struct NODE *START, *N1, *N2, *LOC, *AVAIL;
    int ITEM;
    START = malloc(sizeof(struct NODE));
    N1 = malloc(sizeof(struct NODE));
    N2 = malloc(sizeof(struct NODE));
    START->LINK=N1;
    N1->INFO=10;
    N1->LINK=N2;
    N2->INFO=20;
    N2->LINK=NULL;
    AVAIL= malloc(sizeof(struct NODE));
    AVAIL->LINK= NULL;
    LOC=N1;
    printf("Enter a value: ");
    scanf("%d", &ITEM);
    InsertFirst(START, &AVAIL,LOC, ITEM);
    return 0;
}
