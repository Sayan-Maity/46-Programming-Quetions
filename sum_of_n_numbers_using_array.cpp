#include <stdio.h>

int main()
{
    int n, sum = 0, c, array[100];
    printf("Enter the number of integers you want to add: ");
    scanf("%d", &n);
    printf("Enter %d integers \n", n);

    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
        sum += array[c]; // same as sum = sum + array[c]
    }
    printf("Sum = %d\n", sum);
}
//
//
// Output ==>
// Enter the number of integers you want to add: 3
// Enter 3 integers
// 1 2 3
// Sum = 6