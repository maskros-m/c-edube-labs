/*
Write a program that displays the multiplication table of a given size.

First, your program should ask the user to specify the size (height and weight are equal, so one number should be enough).
If the size is greater than 20, the program should print the message: "Matrix too big.".

Then it should allocate a matrix and fill this matrix with appropriate values (remember: the element of [0][0] should store the multiplication result of 1 and 1).
Then the program should print the multiplication table, four characters per cell. Finally, all memory must be freed.
Your version of the program must print the same result as the expected output.

Sample input
5

Expected output
       1   2   3   4   5
   1   1   2   3   4   5
   2   2   4   6   8  10
   3   3   6   9  12  15
   4   4   8  12  16  20
   5   5  10  15  20  25

Sample input
25

Expected output
Matrix too big.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int **multab, tabsize, r, c;
  
  /* Takes user input and allocate memory to matrix */
  scanf("%d", &tabsize);
  
  /* Checking matrix's size */
  if (tabsize > 20) puts("Matrix too big.");
  else {
       multab = (int **)malloc(tabsize * sizeof(int *));
       for (int row = 0; row < tabsize; row++) {
         multab[row] = (int *) malloc(tabsize * sizeof(int));
       }

       /* Assigning values to each cell of matrix */
       for (r = 0; r < tabsize; r++) {
         for (c = 0; c < tabsize; c++) {
           multab[r][c] = (r + 1) * (c + 1);
         }
       }

       /* Printing matrix */
       for (r = 0; r < tabsize + 1; r++) 
         printf("%*.*d", 4, 0, r);

       for (r = 0; r < tabsize; r++) {
         printf("\n");
         printf("%*.*d", 4, 0, r+1);
         for (c = 0; c < tabsize; c++) {
           printf("%*.%d", 4, 0, multab[r][c]);
         }
       }

       /* Deallocating memory */
       for (r = 0; r < tabsize; r++) free(multab[r]);
       free(multab);
  }
  
  return 0;
}
