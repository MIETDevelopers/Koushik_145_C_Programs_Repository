//Maximum of n numbers using for loop
//Author == koushik mahajan
#include<stdio.h> //standard input output library

int main()   //main function body
{  
    int limit, num, count , large; // Variable declaration of integer data type.

    printf("Enter the limit\n"); 
    scanf("%d", &limit);  //taking input from the user 

    printf("Enter %d numbers\n", limit);  
    for(count = 1; count <= limit; count++) //For loop at the increatment of 1.
    {  
        scanf("%d", &num);  //input from the user.
        if(num > large || count == 1)  //checking num is greater than large.
        {  
            large = num; //if the condition is true, then that num will become the largest number.
        }  
    }  
  	//Printing the largest number among n numbers.
    printf("largest number is %d\n", large);

    return 0;//end
}   