#include <stdio.h>

int b_search(int arr[], int n, int x)
{
    int low = 0; 
    int high = n - 1; 
    while (low <= high) 
    {
        int mid = (low + high) / 2; 
        if (arr[mid] == x) 
        {
            return mid; 
        }
        else if (x > arr[mid]) 
        {
            low = mid + 1; 
        }
        else
        {
            high = mid - 1; 
        }
    }
    return -1; 
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int target = 6;

    int result = b_search(arr, n, target);
    
    if (result != -1) {
        printf("Element found at index: %d\n", result); 
    } else {
        printf("Element not found.\n");
    }

    return 0;
}