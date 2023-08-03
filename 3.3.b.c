#include<stdio.h>
#include<math.h>

int main ()
{
  
  float ex, n, a, b, p;

  ex = 0;			//ex = e^x 

  printf ("Please enter the power of e you want to calculate.\n");
  scanf ("%f", &p);		//User defines e's power. In formula, the x number.

  for (float n = 0; n < 10; n++) {				//The compiler doesn't work if the constraint is not small.
      b = 1;			//The denominator.
      
      for (float a = 1; a <= n; a++) {			//Factorial.
	  b = b * a;		//Factorial.
	}
      
      ex = ex + pow (p, n) / b;	//The formula.
    }
  
  printf ("e's %f. power is: %f", p, ex);
  
  return 0;
}
