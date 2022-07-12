#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1, k = 'A'; j <= i; j++, k++)
        {
            printf("%c", k);
        }
        printf("\n");
    }
    return 0;
}
//
//
// ABCD
// ABC
// AB
// A