#include <stdio.h>

int main()
{
    float a, b, c, res;
    printf("Enter 3 numbers: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a >= b && a >= c)
    {
        if (b >= c)
            res = b;
        else
            res = c;
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
            res = a;
        else
            res = c;
    }
    else if (a >= b)
        res = a;
    else
        res = b;
    printf("2nd minimum number is: %.2f", res);
}
//
//
// Output ==>
// Enter 3 numbers: 2 3 4
// 2nd minimum number is: 3.00