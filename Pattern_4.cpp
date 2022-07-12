#include <stdio.h>
int main()
{
    int a, i;
    for (a = 1; a < 6; a++)
    {
        for (i = 5; i >= a; i--)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
//
//
// Output ==>
// 54321
// 5432
// 543
// 54
// 5
