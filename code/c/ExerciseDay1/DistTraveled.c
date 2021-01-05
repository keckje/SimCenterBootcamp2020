#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (int argc, char **argv) {

  if (argc != 3) {
    printf("Usage: appName a b\n");
    exit(-1);
  }

  float ap = atof(argv[1]);
  float bp = atof(argv[2]);


   /* local variable definition */
   int h = sqrt(ap * ap + bp * bp);
 
   /* check the boolean condition */
   if( ap < 0 ) {
      /* if condition is true then print the following */
      printf("direction includes west component \n" );
   } else if ( ap > 0) {
      /* if condition is false then print the following */
      printf("direction includes a east component \n" );
   }
   
   if ( bp < 0) {
	   /* check if moving south */
	   printf("direction includes a south component \n");
   } else if ( bp > 0 ) {
		/* check if moving north*/
		printf("direction includes a north component \n");
	}
   
   printf("distance is : %d\n", h);
 
   return 0;
}