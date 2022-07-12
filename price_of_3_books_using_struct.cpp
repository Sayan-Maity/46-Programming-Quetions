#include <stdio.h>
struct Books
{
    float price;
};
int main()
{
    float result = 0;
    struct Books p[3];

    printf("Enter Price of 3 books: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &p[i].price);
    }
    for (int i = 0; i < 3; i++)
    {
        result += p[i].price;
    }
    printf("Total price of 3 books: ");
    printf("%.2f", result);
}
//
//
// Output ==>
// Enter Price of 3 books: 10 10.5 20
// Total price of 3 books: 40.50