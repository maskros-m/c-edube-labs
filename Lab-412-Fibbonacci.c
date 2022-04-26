#include <stdio.h>

int main()
{
	/* your code */
	int fib[10], i;
	
	fib[0] = fib[1] = 1;
	
	for (i = 2; i < 10; i++) {
	    fib[i] = fib[i-2] + fib[i-1];
	}
	
	for (i = 0; i < 10; i++) {
	    printf("%d ", fib[i]);
	}
	
	printf("\n");
	for (i = 0; i < 10; i+=2) {
	    printf("%d ", fib[i]);
	}
	
	printf("\n");
	for (i = 1; i < 10; i+=2) {
	    printf("%d ", fib[i]);
	}
	return 0;
}