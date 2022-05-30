#include <stdio.h>
struct student
{
    char firstName[50];
    char lastName[50];
    int roll;
    int classs;
    float marks;
} s;

int main()
{
    int i;
    printf("Enter information of a Student:\n");

    // storing information

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter first name: ");
    scanf("%s", &s.firstName);
    printf("Enter last name: ");
    scanf("%s", &s.lastName);
    printf("Enter class: ");
    scanf("%d", &s.classs);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Displaying Information of Student:\n\n");

    // displaying information
    printf("Roll Number: ");
    printf("%d\n", s.roll);
    printf("First name: ");
    printf("%s\n", s.firstName);
    printf("Last name: ");
    printf("%s\n", s.lastName);
    printf("Class: %d\n", s.classs);
    printf("Marks: %.1f\n", s.marks);
}
//
//
// Output ==>
// Enter information of a Student:
// Enter roll number: 36
// Enter first name: Sayan
// Enter last name: Maity
// Enter class: 12
// Enter marks: 99
// Displaying Information of Student:

// Roll Number: 36
// First name: Sayan
// Last name: Maity
// Class: 12
// Marks: 99.0