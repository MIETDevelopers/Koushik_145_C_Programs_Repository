//Swapping of two numbers using  call by value and call by reference
// Author == koushik mahajan
#include <stdio.h>//standard input output header file

void swap(int*, int*);

int main()//main function body
{
   int x, y;

   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);

   printf("Before Swapping\nx = %d\ny = %d\n", x, y);

   swap(&x, &y); 

   printf("After Swapping\nx = %d\ny = %d\n", x, y);

   return 0;
}

void swap(int *a, int *b)
{
   int temp;
   // Here swapping occurs.
   temp = *b;
   *b = *a;
   *a = temp;   
} 