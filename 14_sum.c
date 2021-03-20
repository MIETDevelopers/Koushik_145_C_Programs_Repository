//Calculate sum of digits of a number using while loop
//Author == koushik mahajan
// 21-03-2021
#include <stdio.h>

int main()
{
  int Number, Reminder, Sum=0;

  printf("\n Please Enter any number\n");
  scanf("%d", &Number);

  while(Number > 0)
  {
     Reminder = Number % 10;
     Sum = Sum+ Reminder;
     Number = Number / 10;
  }

  printf("\n Sum of the digits of Given Number = %d", Sum);

  return 0;
} 