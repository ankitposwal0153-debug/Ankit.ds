#include<stdio.h>
void display(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int partition(int arr[], int p, int r)
{
    int x=arr[r];
    int i=p-1;
    for(int j=p;j<r;j++)
    {
        if(arr[j]<x)
        {
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[r];
    arr[r]=temp;
    return i+1;
}
void qs_rec(int arr[], int p, int r)
{
    if(p<r)
    {
        int q=partition(arr,p,r);
        qs_rec(arr,p,q-1);
        qs_rec(arr,q+1,r);

    }
}
int main()
{
    int arr[]={50,80,30,20,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    qs_rec(arr,0,n-1);
    display(arr,n);
}
