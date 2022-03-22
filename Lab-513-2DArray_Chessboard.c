#include <stdio.h>

int main()
{
	char chessboard[8][8];
	int row, square;
	/* Rooks */
	for (row = 0; row < 8; row += 7) {
	    for (square = 0; square < 8; square++) {
	        chessboard[row][square] = chessboard[row][square+7] = 'R';
	        chessboard[row][++square] = chessboard[row][square+5] = 'N';
	        chessboard[row][++square] = chessboard[row][square+3] = 'B';
            chessboard[row][++square] = 'Q';
            chessboard[row][++square] = 'K';
	    }
	}
	
	for (row = 1; row < 8; row += 5) {
	    for (square = 0; square < 8; square++)
	        chessboard[row][square] = 'P';
	}
	
	for (row = 2; row < 6; row++) {
	    for (square = 0; square < 8; square++) {
	        chessboard[row][square] = ' ';
	    }
	}
	
	for (row=0; row < 8; row++) {
	    for (square=0; square<8; square++) {
	        printf("%c", chessboard[row][square]);
	    }
	    printf("\n");
	}
	    
	return 0;
}
