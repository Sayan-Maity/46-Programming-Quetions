#include <stdio.h>
#include <stdlib.h>
void main()
{
    int fno, sno, *ptr1 = &fno, *ptr2 = &sno;

    printf(" Input the first number : ");
    scanf("%d", ptr1);
    printf(" Input the second  number : ");
    scanf("%d", ptr2);

    if (*ptr1 > *ptr2)
    {
        printf("\n\n %d is the maximum number.\n\n", *ptr1);
    }
    else
    {
        printf("\n\n %d is the maximum number.\n\n", *ptr2);
    }
}
//
//
// Output ==>
// Input the first number : 3
// Input the second  number : 4
// 4 is the maximum number