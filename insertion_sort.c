#include <stdio.h>
void display(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insertion_sort(int arr[], int n)
{
    for(int p= 1; p<n; p++)
    {
        while (p>0 && arr[p]<arr[p-1])
        {
            int temp = arr[p];
            arr[p] =  arr[p-1];
            arr[p-1] = temp;
            p--;

        }
    }             
}

int main()
{
    int arr[] = {51,87,39,23,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    display (arr,n);
    insertion_sort(arr, n); 
    display (arr,n);
}