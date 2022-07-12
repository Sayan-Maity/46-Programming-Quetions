#include <stdio.h>

int main()
{

    int arr[50], num, x, y, temp;
    printf("Enter Number of Elements you want in array: ");
    scanf("%d", &num);
    printf("Please Enter the Value of Elements: ");
    for (x = 0; x < num; x++)
        scanf("%d", &arr[x]);
    for (x = 0; x < num - 1; x++)
    {
        for (y = 0; y < num - x - 1; y++)
        {
            if (arr[y] > arr[y + 1])
            {
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }
    }
    printf("Array after implementing bubble sort: ");
    for (x = 0; x < num; x++)
    {
        printf("%d  ", arr[x]);
    }
}
//
//
// Output ==>
// Enter Number of Elements you want in array: 3
// Please Enter the Value of Elements: 5 3 1
// Array after implementing bubble sort: 1  3  5