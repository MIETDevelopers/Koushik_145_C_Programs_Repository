//NUMBER IS EVEN OR ODD.
//Author == koushik mahajan

#include<stdio.h> //Standard input output library
int main(){ //Main function body starting..

	int number; // number variable 
	printf("Enter the number: ");
	scanf("%d", &number); //taking number as a input from the user.

	// "%" Modulo operator  -- for checking whether the number is completely divisible by 2 or not.
	if (number % 2 == 0)  
		printf("%d is even. ",number); // if the condition is true. it will print "number" is even.
	else
		printf("%d is odd. ",number); // else. it will print "number" is odd.
	return 0;
}