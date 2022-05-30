#include <stdio.h>

int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int num;
    printf("Give the number to find factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}
//
//
// Output ==>
// Give the number to find factorial: 4
// Factorial of 4 is 24
//
// Non-Recurssive Way to find the factorial -->
#include <stdio.h>

unsigned long factorial(int n)
{
    unsigned long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;
    printf("Enter the factorial: ");
    scanf("%d", &n);
    printf("The Factorial of %d is %lu", n, factorial(n));

    return 0;
}
//
//
// Output ==>
// Enter the factorial: 5
// The Factorial of 5 is 120
