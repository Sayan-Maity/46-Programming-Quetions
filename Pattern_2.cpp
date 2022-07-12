#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, j, c = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%d ", c);
            ++c;
        }
        printf("\n");
    }
}
//
//
// Output ==>
// Enter the number of rows: 5
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15