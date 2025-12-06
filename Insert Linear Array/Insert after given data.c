#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,6};
    int n=5;
    int data=4;
    int x=5;
    int pos=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==data)
        {
            pos=i+1;
            break;
        }
    }
        if(pos == -1)
        {
            printf("Not found");
            return 0;
        }

    for(int i=n-1; i>=pos; i--)
    {
        arr[i+1] = arr[i];
    }
     arr[pos]=x;
     n=n+1;
   for(int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
   return 0;
}
