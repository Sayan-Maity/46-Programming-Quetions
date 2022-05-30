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
// Tutorial Gateway
// Length = 16