#include <stdio.h>

int main()
{

    int arr[50], n, i, j, temp;
    printf("Enter Number of Elements you want in array: ");
    scanf("%d", &n);
    printf("Please Enter the Value of Elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array after implementing bubble sort: ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}
//
//
// Output ==>
// Enter Number of Elements you want in array: 3
// Please Enter the Value of Elements: 5 3 1
// Array after implementing bubble sort: 1  3  5