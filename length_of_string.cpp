// =======  Method-1  =======
#include <stdio.h>
#include <string.h>

int main()
{
    char Str[100];
    int lg;

    printf("\n Please Enter any String \n");
    gets(Str);

    lg = strlen(Str);

    printf("Length = %d\n", lg);

    return 0;
}
//
//
// Output ==>
// Please Enter any String
// Sayan Maity
// Length = 11
//
//
//
//
// ========  Method-2  ========
#include <stdio.h>
int main()
{
    char str[100], i;
    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; ++i)
        ;
    printf("\nLength of input string: %d", i);

    return 0;
}
//
//
// Output ==>
// Enter a string: sayan
// Length of input string: 5