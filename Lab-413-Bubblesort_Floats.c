#include <stdio.h>

int main()
{
	float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
	/* your code */
	float aux;
	int i, swapped;
	
	do {
	    swapped = 0;
	    
	    for (i = 0; i < 9; i++) {
	        if (numbers[i] < numbers[i + 1]) {
	            swapped = 1;
	            aux = numbers[i + 1];
	            numbers[i + 1] = numbers[i];
	            numbers[i] = aux;
	        }
	        printf("%.2f ", numbers[i]);
	        
	    }
	    
	    printf("%.2f\n", numbers[9]);
	    
	    
	} while(swapped);
	//printf("\n");
	
	for (i = 0; i < 10; i++) {
	    printf("%.2f ", numbers[i]);
	}
	return 0;
}
