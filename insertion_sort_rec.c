#include <stdio.h>
void display(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insertion_sort_rec(int arr[], int n, int p)
{
    if(p==n)
    {
        return;
    }
    while (p>0 && arr[p]<arr[p-1])
    {
        int temp = arr[p];
        arr[p] =  arr[p-1];
        arr[p-1] = temp;
        p--;

    }
    insertion_sort_rec( arr, n, p+1);           
}

int main()
{
    int arr[] = {51,77,39,25,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    display (arr,n);
    insertion_sort_rec(arr, n,0); 
    display (arr,n);
}