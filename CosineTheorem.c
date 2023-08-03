#include<stdio.h>
#include<math.h>

double costhe (float s1, float s2, double a);	//Cosine theorem's function.

int main ()
{
  float s1, s2, a;
  
  printf("Enter the two sides of the triangle and the angle between these sides, respectively.\n");
  
  printf ("\nFirst side: ");
  scanf ("%f", &s1);		//First side.
  
  printf ("\nSecond side: ");
  scanf ("%f", &s2);		//Second side.
  
  printf ("\nThe angle between the sides: ");
  scanf ("%f", &a);		//Angle.


  printf ("\nThe length of the edge whose length is not entered is: %.2f \n", costhe (s1, s2, a));
}

double costhe (float s1, float s2, double a)
{
  float len;
  double PI = 22.0 / 7.0;	//PI number.
  double rad;			//Radian.
  rad = a * (PI / 180);		//Value of angle in radians.
  len = sqrt (pow (s1, 2) + pow (s2, 2) - (2 * s1 * s2 * cos (rad)));	//Cosine theorem's formula.
  return len;
}
