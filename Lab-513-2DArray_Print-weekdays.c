#include <stdio.h>

int main()
{
	char weekdays[7][25] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	int num;
	scanf("%d", &num);
	
	char (*p)[25];
	p = weekdays;

	
	if (num < 0 || num > 6) {puts("Error, no such day."); }
	else {
	    p += num;
	    printf("Pointer version: %s\n", *p);
	    printf("Array index version: %s\n", weekdays[num]); }
	
	return 0;
}
