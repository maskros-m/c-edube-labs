/*
Write a program that allocates memory of a size requested by the user.
This program requests a number from the user and checks if that number is less than 1 MB (1024*1024). If it's not, then the program prints the message: "Too much memory requested.".

In the next step, the program allocates a one-dimesional array of characters (char) and fills this array with characters from "A" to "Z" - the first element (index 0) contains "A", the 26th element (index 25) contains "Z", the 27th element (index 26) contains "A" and so on.

Then, the program prints the first 400 bytes of an array (or the whole array if it's smaller than 400 characters), 40 characters in each row.
To simplify the program, you can use the break or continue statements. Remember to free up the array memory at the end of the program.

Your version of the program must print the same result as the expected output.
Sample input
100

Expected output
ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMN
OPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZAB
CDEFGHIJKLMNOPQRSTUV

Sample input
500

Expected output
ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMN
OPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZAB
CDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOP
QRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCD
EFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQR
STUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEF
GHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRST
UVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGH
IJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUV
WXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJ

Sample input
1200500

Expected output
Too much memory requested.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int datasize, i;
	scanf("%d", &datasize);
	if (datasize > 1024 * 1024) {
	    puts("Too much memory requested.");
	    return 1;
	}
	char *arr;
	arr = (char *) malloc(datasize * sizeof(char));
	for (i = 0; i < datasize; i++) {
	    arr[i] = 'A' + i % 26;
	}
	i = 0;
	if (datasize < 400) {
	    while (i < datasize) {
            for (int j = 0; j < 40; j++) {
	            printf("%c", arr[i]);
	            ++i;
	            if (i == datasize) break;
	        }
	        printf("\n");
	    }
	} else if (datasize > 400) {
	    while (i < 400) {
	        for (int j = 0; j < 40; j++) {
	            printf("%c", arr[i]);
	            ++i;
	            if (i == 400) break;
	        }
	        printf("\n");
	    }
	}
	free(arr);
	return 0;
}
