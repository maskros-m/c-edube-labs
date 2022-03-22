/*
Write a program that asks the user to enter a number, and prints which day of the week that number corresponds to. 
The days are indexed from 0 (Sunday) to 6 (Saturday).
Store the names of the days in an array and print the name of the day in two ways:

+ with pointer arithmetic;
+ with array indexing.
Before the program gets a value from the array, it must first check if the given day is greater than or equal to zero and less than 7. 
If not, it should print the message: Error, no such day..

Your version of the program must print the same result as the expected output.

Sample input
0
Sample output
Pointer version: Sunday
Array index version: Sunday

Sample input
5
Sample output
Pointer version: Friday
Array index version: Friday

Sample input
12
Sample output
Error, no such day.
*/

#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	
	char weekdays[7][25] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	char (*p)[25];
	p = weekdays;
	
	if (num < 0 || num > 7) {puts("Error, no such day."); }
	else {
	    p += num;
	    printf("Pointer version: %s\n", *p);
	    printf("Array index version: %s\n", weekdays[num]);
	}
	return 0;
}
