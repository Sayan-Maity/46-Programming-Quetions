#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
//
//
// Output ==>
// Enter the number of rows: 5
// 5 5 5 5 5
// 4 4 4 4
// 3 3 3
// 2 2
// 1