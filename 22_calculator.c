//Write a C program to create Simple Calculator using switch case and function for every operation
//Author == koushik mahajan
#include<stdio.h>//Standard input output library
int main(){//Main function body starting..
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):"); 
    scanf("%c", &operator); 
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b); 
    switch(operator) 
    {
        //Addition Function
        case '+':
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b); 
            break;

            //Subtraction Function
            case '-':
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b);
            break;

            //Multiplication Function
            case '*':
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b); 
            break;
            
         //Division Function
        case '/':
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b); 
            break;
    printf("Error encountered by the input values");  //Default
    }
    return 0;
} 