// =======  Method-1(using Pointers)  =======
#include <stdio.h>

void SortArray(int Size, int *parr)
{
    int i, j, temp;

    for (i = 0; i < Size; i++)
    {
        for (j = i + 1; j < Size; j++)
        {
            if (*(parr + j) < *(parr + i))
            {
                temp = *(parr + i);
                *(parr + i) = *(parr + j);
                *(parr + j) = temp;
            }
        }
    }
    printf("\nSorted array using Pointer = ");
    for (i = 0; i < Size; i++)
    {
        printf("%d ", *(parr + i));
    }
}

int main()
{
    int Size;

    printf("\nEnter array Size = ");
    scanf("%d", &Size);

    int arr[Size];

    printf("\nEnter %d elements array = ", Size);
    for (int i = 0; i < Size; i++)
    {
        scanf("%d", &arr[i]);
    }
    SortArray(Size, arr);
    printf("\n");
}
//
//
// Output ==>
// Enter array Size = 3
// Enter 3 elements of array = 4 1 5
// Sorted array using Pointer = 1 4 5
//
//
//
//
//
//
// =======  Method-2(Without using Pointers)  =======
#include <stdio.h>
void main()
{
    int num[20];
    int i, j, a, n;
    printf("enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; ++i)
        scanf("%d", &num[i]);
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (num[i] > num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    printf("Sorted array is: ");
    for (i = 0; i < n; ++i)
    {
        printf("%d", num[i]);
    }
}
//
//
// Output ==>
// enter number of elements: 3
// Enter the elements: 2 6 4
// Sorted array is: 246