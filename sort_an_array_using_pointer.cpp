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
//
// Enter array Size = 3
// Enter 3 elements of array = 4 1 5
// Sorted array using Pointer = 1 4 5