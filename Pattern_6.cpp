#include <stdio.h>
int main()
{
    int a, i;
    for (a = 5; a >= 1; a--)
    {
        for (i = a; i <= 5; i++)
        {
            printf("%d ", a);
        }
        printf("\n");
    }
    return 0;
}
//
//
// Output ==>
// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1