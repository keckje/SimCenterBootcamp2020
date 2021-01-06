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


  
  return 0;
}


float StressTrans (