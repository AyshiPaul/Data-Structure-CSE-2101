#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5};
    int n=5;
    int ITEM=6;
   arr[n]=ITEM;
   n=n+1;
   for(int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
   return 0;
}
