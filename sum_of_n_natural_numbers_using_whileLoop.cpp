#include <stdio.h>

int main()
{
    int num, count = 1, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    while (count <= num)
    {
        sum = sum + count;
        count++;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
//
//
// Output ==>
// Enter a positive number: 6
// Sum = 21