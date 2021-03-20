//Check no. is armstrong or not using while loop
// Author == koushik mahajan

#include <stdio.h>//standard input output library

int main() {//main function body
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong
                                                    number.", num);

    return 0;
}//standard input output library
