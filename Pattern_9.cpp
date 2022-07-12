#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of lines: ");
    scanf("%d", &n);

    printf("\n");
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("$ ");
        }

        printf("\n");
    }

    return 0;
}
//
//
// Output ==>
// Enter number of lines: 4

// $ $ $ $
// $ $ $
// $ $
// $
