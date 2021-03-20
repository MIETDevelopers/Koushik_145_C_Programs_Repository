//To find max element and index in array
//Author == Koushik mahajan

#include<stdio.h>//standard input output library
int main(){//main function body
	int i;
	float arr[5];

	printf("Please enter five numbers:\n ");

	for (i = 0; i < 5; ++i)
	{
    scanf("%f", &arr[i]);//This will scan (read) the number entered by user.
	}

		for (i = 1; i < 5; ++i)
		{
    	if (arr[0] < arr[i])
        	arr[0] = arr[i];
		}
	printf("Largest element = %.2f", arr[0]);

	return 0;
}//End