#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,6};
    int n=5;
    int ITEM=5;
    int p=5;
    if (p>n)
    {
        arr[p-1]=ITEM;
        n=p;
    }
    else if(arr[p-1]=6)
    {
        arr[p-1]=ITEM;
    }
    else{

    }
   for(int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
   return 0;
}
