#include <stdio.h>
#include "espl_lib.h"

int main(){
	unsigned int input_number;

	while(1){
		printf("Please input a positive integer: ");
		scanf("%d", &input_number);
		printf("%s\n", num_to_words(input_number));

		printf("\n------------------------------------\nInput \n\t0 to exit the program.\n\t1 to run another number.\n------------------------------------\n");
		scanf("%d", &input_number);
		printf("\n");
		if (input_number == 0){
			printf("Exiting...\n");
			return 0;
		}
		
	}
	return 0;
}
