//Arithmetic_operations_using_addition_subtraction_multiplication_and_remainder_operator
//Author == koushik mahajan

#include<stdio.h>//standard input output liberary
int main(){//main function body
    char operator;//variable declaration
    double a, b;
    printf("Enter an operator (+, -, *, /):"); //It will print the operater to be entered by user.
    scanf("%c", &operator); //It will scan the operater entered by user.
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b); //It will scan the numbers entered by user.
    switch(operator)
    {
        //addition 
        case '+':
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b); 
            break;
         //substraction
        case '-':
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b); 
            break;
            //multiplication
        case '*':
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b); 
            //Division
        case '/':
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b);
    printf("Error encountered by the input values");
    }
    return 0;
} 