#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,6};
    int n=5;
    int data=5;
    int p=5;
    for(int i=n; i>p-1; i--)
    {
        arr[i] = arr[i-1];
    }
     arr[p-1]=data;
     n=n+1;
   for(int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
   return 0;
}
