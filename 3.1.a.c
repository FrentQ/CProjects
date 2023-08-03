#include<stdio.h>

int main () 
{
  
float n, t;
  
  t = 0;			//Firstly, the sum is equal to 0.
  n = 1;			//Number starts as 1.
  
while (n <= 50.)
    {				//n is smaller than or equal to 50.
      t = (1. / n) + t;		//The formula.
      n++;			//n = n+1
    }
  
 
printf ("Answer of the question is: %.3f", t);
  
 
return 0;

}
