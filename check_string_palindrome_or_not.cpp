#include <stdio.h>
#include <string.h>

void isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
    }
    printf("%s is a palindrome\n", str);
}
int main()
{
    char str[20];
    scanf("%s", &str);
    isPalindrome(str);
    return 0;
}
//
//
// Output ==>
// madam
// madam is a palindrome