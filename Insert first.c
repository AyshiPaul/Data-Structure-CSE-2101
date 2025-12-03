#include<stdio.h>
int main()
{
    int arr[6]={2,3,4,5,6};
    int n=5;
    int ITEM=1;
    for(int i=n; i>0; i--)
    {
        arr[i] = arr[i-1];
    }
     arr[0]=ITEM;
   for(int i=0; i<n+1; i++)
    {
        printf("%d\n", arr[i]);
    }
   return 0;
}

