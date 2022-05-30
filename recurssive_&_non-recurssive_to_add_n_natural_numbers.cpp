// Iterative Way to add N natural numbers -->
#include <stdio.h>
void main()
{
    int num, i, sum = 0;
    printf(" Enter a positive number: ");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("\n Sum of the first %d number is: %d", num, sum);
}
//
//
// Output ==>
// Enter a positive number: 5
// Sum of the first 5 number is: 15
//
//
//
//
// Recurssive Way to add N natural numbers -->
#include <stdio.h>

int addNumbers(int n)
{
    if (n == 0)
        return;
    else
        return n + addNumbers(n - 1);
}
int main()
{

    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d", addNumbers(num));
    return 0;
}
//
//
// Output ==>
// Enter a positive integer: 5
// Sum = 15