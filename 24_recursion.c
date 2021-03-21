// Factorial using recursion
// Author == koushik mahajan
// 21-03-2021

#include<stdio.h> //input output header file.
long int multiplyNumbers(int n); //Variable declaration of long int data type
int main() { //main function body starting
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n); //taking n as a input from the user
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
} 