// Array of structures for student marks for each student and passing  it to function for various operations
// Author == koushik mahajan
// 21-03-2021

#include <stdio.h> //input output header file.
struct student {
    char name[50];
    int roll;
    float marks;
} s;

int main() { //Main function body starting..
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);

    return 0;
}