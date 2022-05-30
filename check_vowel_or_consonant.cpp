#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an Alphabet: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("\nIt's a Vowel");
    else
        printf("\nIt's a Consonant");
    return 0;
}
//
//
// Output ==>
// Enter an Alphabet: i
// It's a Vowel