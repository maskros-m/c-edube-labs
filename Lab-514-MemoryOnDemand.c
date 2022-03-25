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