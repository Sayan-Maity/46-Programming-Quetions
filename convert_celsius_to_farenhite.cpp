#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Please Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = ((celsius * 9) / 5) + 32;
    // fahrenheit = ((9/5) * celsius) + 32;
    // fahrenheit = ((1.8 * celsius) + 32;

    printf("\n %.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
}
//
//
// Output ==>
// Please Enter temperature in Celsius: 7
// 7.00 Celsius = 44.60 Fahrenheit