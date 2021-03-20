//Factorial using for loop
//Author == Koushik Mahajan
#include<stdio.h> //standard input and output funtions
long int multiplyNumbers(int n); 
int main() { //main function body
    int n;  
    printf("Enter a positive integer: "); 
    scanf("%d",&n); 
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else 
        return 1;//end
} 