#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5};
    int n=5;
    int pos=3;
    if(pos==n)
    {
        n--;
    }
    for (int i=pos-1; i<n; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
