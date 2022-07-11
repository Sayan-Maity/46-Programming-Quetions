#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an Alphabet: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("%c: is a Vowel", ch);
    else
        printf("%c: is a Consonant", ch);
    return 0;
}
//
//
// Output ==>
// Enter an Alphabet: i
// i: is a Vowel