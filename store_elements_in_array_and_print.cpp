#include <stdio.h>

int main()
{
    int arr[50], i, n;

    printf("Please Enter Number of elements in an array  :  ");
    scanf("%d", &n);

    printf("Please Enter %d elements of an Array \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elemenst in this Array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
//
//
// Please Enter Number of elements in an array  :  3
// Please Enter 3 elements of an Array
// 1 2 3
//  Elemenst in this Array are :
// 1 2 3