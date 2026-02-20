#include<stdio.h>
void display( int arr[],int n)
{
    for( int i=0;i<n;i++)
    printf("%d\n",arr[i]);
}
int insert_pos(int arr[], int n, int x, int pos)
{
    if( pos<0||pos>n)
    {
        printf("not possible");
        return n;
    }
    for(int j=n-1;j>=pos;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[pos]=x;
    return n+1;
}
int main()
{
    int arr[10]={10,20,30,40,50,60,70};
    int n=6;
    int x=50;
    n=insert_pos(arr,n,50,3);
    display(arr,n);
}