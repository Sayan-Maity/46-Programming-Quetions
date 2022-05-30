#include <stdio.h>

int main()
{
    double a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%lf%lf%lf", &a, &b, &c); // lf is a format specifier to take double as input
    // a is the largest
    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            /* .2lf restricts the number till
                2 decimal places */
            printf("\n\n%.2lf is the 2nd minimum number\n", b);
        }
        else
        {
            printf("\n\n%.2lf is the 2nd minimum number\n", c);
        }
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
        {
            printf("\n\n%.2lf is the 2nd minimum number\n", a);
        }
        else
        {
            printf("\n\n%.2lf is the 2nd minimum number\n", c);
        }
    }
    // c is the largest number of the three
    else if (a >= b)
    {
        printf("\n\n%.2lf is the 2nd minimum number\n", a);
    }
    else
    {
        printf("\n\n%.2lf is the 2nd minimum number\n", b);
    }
}
//
//
// Output ==>
// Enter 3 numbers: 9 1 0
// 1.00 is the 2nd minimum number