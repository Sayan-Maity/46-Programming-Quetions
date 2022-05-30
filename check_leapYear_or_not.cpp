#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 100 == 0 && year % 400 == 0) ||
        (year % 100 != 0 && year % 4 == 0))
    {
        printf("%d is a leap year\n", year);
    }
    else
        printf("%d is not a leap year\n", year);
}
//
//
// Output ==>
// Enter a year: 2054
// 2054 is not a leap year