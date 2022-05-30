#include <stdio.h>

int main()
{
    int n, m, c, d, first[10][10], second[10][10], sum[10][10], diff[10][10];
    printf("\nEnter the number of rows and columns of the first matrix \n");
    scanf("%d%d", &m, &n);

    printf("\nEnter the %d elements of the first matrix \n", m * n);
    for (c = 0; c < m; c++)     // to iterate the rows
        for (d = 0; d < n; d++) // to iterate the columns
            scanf("%d", &first[c][d]);

    printf("\nEnter the %d elements of the second matrix \n", m * n);
    for (c = 0; c < m; c++)     // to iterate the rows
        for (d = 0; d < n; d++) // to iterate the columns
            scanf("%d", &second[c][d]);
    // printing the first matrix
    printf("\n\nThe first matrix is: \n");
    for (c = 0; c < m; c++) // to iterate the rows
    {
        for (d = 0; d < n; d++) // to iterate the columns
        {
            printf("%d\t", first[c][d]);
        }
        printf("\n");
    }

    /*
        printing the second matrix
    */
    printf("\nThe second matrix is: \n");
    for (c = 0; c < m; c++) // to iterate the rows
    {
        for (d = 0; d < n; d++) // to iterate the columns
        {
            printf("%d\t", second[c][d]);
        }
        printf("\n");
    }
    // finding the SUM of the two matrices and storing in another matrix sum of the same size
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            sum[c][d] = first[c][d] + second[c][d];

    // printing the elements of the sum matrix
    printf("\nThe sum of the two entered matrices is: \n");
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }
    // finding the DIFFERENCE of the two matrices and storing in another matrix difference of the same size

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            diff[c][d] = first[c][d] - second[c][d];

    // printing the elements of the diff matrix
    printf("\nThe difference(subtraction) of the two entered matrices is: \n");
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            printf("%d\t", diff[c][d]);
        }
        printf("\n");
    }
}
//
//
// Output ==>
// Enter the number of rows and columns of the first matrix
// 2 2
// Enter the 4 elements of the first matrix
// 1 2 2 3
// Enter the 4 elements of the second matrix
// 1 2 2 3
// The first matrix is:
// 1	2
// 2	3

// The second matrix is:
// 1	2
// 2	3

// The sum of the two entered matrices is:
// 2	4
// 4	6

// The difference(subtraction) of the two entered matrices is:
// 0	0
// 0	0