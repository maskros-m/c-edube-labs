#include <stdio.h>

int main()
{
	int i;
	float numbers[10] = {3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2};
	float biggerNumbers[10];
	float *source = numbers;
	float *copy = biggerNumbers;
	
	// add 1.0 to each element in source
	for (i = 0; i < 10; i++)
	{
		*copy = *source + 1.0;
		copy++;
		source++;
	}

	// float *biggerEnd = biggerNumbers;
	// float *biggerStart = biggerNumbers;
	float *middle1 = biggerNumbers+4;
	float *middle2 = middle1+1;
	int end = --copy - middle1;
	
	for (i = 0; i < end; i++)
	{   
		printf("%.1f\n", *middle1);
		middle1--;
		printf("%.1f\n", *middle2);
		middle2++;
	}
    
	return 0;
}