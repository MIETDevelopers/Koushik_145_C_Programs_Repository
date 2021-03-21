// To demonstrate the use of malloc(), calloc() and free() functions
// Author == koushik mahajan
#include <stdio.h>
#include <stdlib.h> //Using standard library header file.
int main(){
int *ptr;
ptr = malloc(15 * sizeof(*ptr)); //A block of 15 integers.
    if (ptr != NULL) {
      *(ptr + 5) = 298; //Assign 298 to sixth integer.
      printf("Value of the 6th integer is %d",*(ptr + 5));
	int main(){
	int *ptr;
		ptr = malloc(15 * sizeof(*ptr)); //A block of 15 integers.
    	if (ptr != NULL) {
        *(ptr + 5) = 298; //Assign 298 to sixth integer.
    printf("Value of the 6th integer is %d",*(ptr + 5));
    }