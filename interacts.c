// file prepared in the previous program and then interacts with user asking any student's roll number and prints his/her attendance details
//author koushik mahajan
//30/03/2021
#include <stdio.h>
int main() {
    printf("The mimimum attendance for giving the examination is 75 percent. \n");
    printf("enter details to check eligibility:\n");
    float a, b;
    printf("enter the total no. of classes held.\n");
    scanf("%f", &a);
    printf("enter the no. of classes attended.\n");
    scanf("%f", &b);
    if((b/a) * 100 < 75) {
        printf("your attendance is less than 75%.\n");
        char c;
        printf("Do you have a medical cause? 'Y' for yes and 'N' for no.\n");
        scanf(" %ch", &c);
    switch(c) {
    case 'Y':
        printf("you are eligible for giving the examinations.");
          break;
      case 'N': 
      printf("sorry, you are not eligible for giving the examinations.");
      break;
      default:
          printf("Invalid input.");
  }
    } else {
        printf("you are eligible for giving the examinations.");
    }
    return 0;
}