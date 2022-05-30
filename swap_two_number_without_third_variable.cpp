// ========  Method-1  ========
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first and second number: ");
    scanf("%d%d", &a, &b);
    printf("Before swap a=%d b=%d", a, b);
    a = a + b; // a=30 (10+20)
    b = a - b; // b=10 (30-20)
    a = a - b; // a=20 (30-10)
    printf("\nAfter swap a=%d b=%d", a, b);
}
//
//
// Output ==>
// Enter first and second number: 4 6
// Before swap a=4 b=6
// After swap a=6 b=4
//
//
//
//
// ========  Method-1  ========
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    printf("Enter first and second number: ");
    scanf("%d%d", &a, &b);
    printf("Before swap a=%d b=%d", a, b);
    a = a * b; // a=200 (10*20)
    b = a / b; // b=10 (200/20)
    a = a / b; // a=20 (200/10)
    printf("\nAfter swap a=%d b=%d", a, b);
}
//
//
// Output ==>
// Enter first and second number: 4 8
// Before swap a=4 b=8
// After swap a=8 b=4