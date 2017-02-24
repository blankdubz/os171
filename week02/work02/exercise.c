/*
 * Name: BUDI INDRAWAN
 * NPM: 1606954754
 * Class: OS EXT
 * Comment: Programming in C
 */

#define LOOP 4

#include <stdio.h>

void main () {
	int input = 3;
	int ii, jj = 0;
	for (ii=0; ii<LOOP; ii++) {
		 jj=jj+input;
	}
	printf("%d times %d equal %d\n",input ,LOOP ,jj);
}
