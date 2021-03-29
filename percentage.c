//To be modified.
#include <stdio.h>
#include <stdlib.h>
struct student
{
    int roll_no;
    char name[80];
    int attendance;
};
void accept(struct student[], int);
void display(struct student[], int);
int search(struct student[], int, int);
int main()
{
    struct student data[20];
    int n, choice, roll_no, index;
    printf("Student attendance record maintainence System\n\n");
    printf("Number of student records you want to enter? : ");
    scanf("%d", &n);
    accept(data, n);
    do
    {