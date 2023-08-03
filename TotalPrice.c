#include <stdio.h>

int main () 
 
{
  
float p1, p2, t, d, t2;
  
 
printf ("Enter the prices of products.\n");
scanf ("%f%f", &p1, &p2);	//The products's prices.
  
t = p1 + p2;			//Total price.
  
if (t <= 200.0)		//Total price is smaller than or equal to 200.
    printf ("The price is: %f\n", t);
  
 
  else
    {				//Total price is greater than 200.
      printf("The price is %f but a 25 percent discount will be applied to the 2nd product.\n", t);
      d = p2 * 75.0 / 100.0;	//%25 discount 
      t2 = d + p1;		//New total price.
      printf ("New total price is: %f", t2);
    }
  
 
return 0;

}
