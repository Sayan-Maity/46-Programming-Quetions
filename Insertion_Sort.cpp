#include <stdio.h>
int main()
{
    int i, key, j;
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The given array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("\nThe sorted array is: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
//
//
// Output ==>
// The given array is: 12 11 13 5 6
// The sorted array is: 5 6 11 12 13