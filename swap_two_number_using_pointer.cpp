#include <stdio.h>

void swapTwo(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int num1, num2;

    printf("Please Enter the First Value to Swap  = ");
    scanf("%d", &num1);

    printf("Please Enter the Second Value to Swap = ");
    scanf("%d", &num2);

    printf("\nBefore Swapping: num1 = %d  num2 = %d\n", num1, num2);

    swapTwo(&num1, &num2);

    printf("After Swapping : num1 = %d  num2 = %d\n", num1, num2);
}
//
//
//
// Output ==>
// Please Enter the First Value to Swap  = 4
// Please Enter the Second Value to Swap = 5
// Before Swapping: num1 = 4  num2 = 5
// After Swapping : num1 = 5  num2 = 4