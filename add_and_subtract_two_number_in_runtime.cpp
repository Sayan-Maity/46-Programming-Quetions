#include <stdio.h>
float addition(float num1, float num2)
{
    float sum;
    sum = num1 + num2;
    return sum;
}
float substraction(float num3, float num4)
{
    float sub;
    if (num3 > num4)
        sub = num3 - num4;
    else
        sub = num4 - num3;
    return sub;
}
int main()
{
    float number1, number2, number3, number4, result1, result2;
    printf("Enter two number for sum: ");
    scanf("%f %f", &number1, &number2);
    result1 = addition(number1, number2);
    printf("%.2f\n", result1);
    printf("Enter two number for sub: ");
    scanf("%f %f", &number3, &number4);
    result2 = substraction(number3, number4);
    printf("%.2f\n", result2);
}
//
//
// Output ==>
// Enter two number for sum: 6 7
// 13.00
// Enter two number for sub: 9 3
// 6.00