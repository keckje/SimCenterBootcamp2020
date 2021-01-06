#include <stdio.h>
#include <ctype.h> /* needed to avoid implicit delaration of function 'isdigit' warning message */

/* run on a code by ./count.out < file name, i.e. ./count.out < count.c */

int main(int argc, char **argv) {
	char c;
	int nDigit =0, nWhite = 0, nOther = 0;
	while ((c = getchar()) != EOF) {
		if(c == ' '){
			nWhite++;
		}
		else if (isdigit(c)){
			nDigit++;
		}
		else {
			nOther++;
		}
	}
	printf("number of digits %d ; number of white spaces %d ; number of other characters %d\n", nDigit, nWhite, nOther);
	
	return(0);
}
	