// program to solve quadratic equation
//        ax^2 + bx + c = 0
//
// 
// sigmaX' = sigmaX * cos^2(theta) + sigmaY * sin^2(theta) + 2 * tauXY Sin(theta)Cos(theta)
// sigmaY' = sigmaX * sin^2(theta) + sigmaY * cos^2(theta) - 2 * tauXY Sin(theta)Cos(theta) 
// tauXY' = (sigmaY-sigmaX) * sin(theta)cos(theta) + tauXY(cos^2(theta) - sin^2(theta))
//
//write a program to take 3 inputs and output the soln
// deal with possible errors in input, i.e. b^2-4ac negative

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if (argc != 5) {
    printf("Usage: appName a b c d\n");
    exit(-1);
  }

  float vector[3], vectorTransformed[3] = atof(argv[1]);
  vector[0] = atof(argv[0]);
  vector[1] = atof(argv[1]);
  vector[2] = atof(argv[2]);
  float theta = atof(argv[4]);

  float b2minus4ac = b*b-4*a*c;

  if (b2minus4ac > 0.0) {
    
    double bDiv2a = b/(2*a);
    double other = sqrt(b2minus4ac)/(2*a);
    double x1 = bDiv2a - other;
    double x2 = bDiv2a + other;    
    printf("Double Solution x1:  %f  x2: %f\n", x1, x2);    

  } else if (b2minus4ac == 0.0) {

    double x = -b/(2*a);
    printf("Single Solution is %f\n", x);
    
  } else {
    
    double bDiv2a = b/(2*a);
    double other = sqrt(-b2minus4ac)/(2*a);
    double x1 = bDiv2a - other;
    double x2 = bDiv2a + other;
    
    printf("Complex Solution x1:  %f + %fi, x2: %f + %fi\n", bDiv2a, other, bDiv2a, -other);    
    
  }

  
  return 0;
}

