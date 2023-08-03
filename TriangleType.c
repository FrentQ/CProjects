#include <stdio.h>

int main () 
{
  
float a, b, c;
  
printf ("Enter the edge lenghts of the triangle.\n");
scanf ("%f%f%f", &a, &b, &c);	//User enters the edge lenghts's values.
 
  if (a == b && b == c)		//All lenghts are equal to each other.
    printf ("This triangle is an isosceles triangle.\n");
  
  else if (a == b  || a == c )	//Just any two of them are equal to each other.
    printf ("This triangle is an equilateral triangle.\n");
  
  else				//They are not equal to each other.
    printf ("This triangle is a diverse triangle.\n");
  
return 0;

}


