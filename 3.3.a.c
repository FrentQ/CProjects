#include<stdio.h>

int main ()
{
  float e, a, b;

  e = 0;			//The sum (Euler number) is zero at first.
  
  for (float n = 0; n <= 10000; n++) {				//The larger the number, the closer we get to the true value.
      b = 1;			//The denominator
      for (float a = 1; a <= n; a++) {			//Factorial
	  b = a * b;		//The denominator
	}

      e = e + (1. / b);		//The formula
    }

  printf ("e = %.3f", e);
  
  return 0;
}
