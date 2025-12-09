#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6};
    int n=6;
    n--;
    for ( int  i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
