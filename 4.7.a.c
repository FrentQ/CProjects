#include<stdio.h>
#include<math.h>
#define PI 22./7

double fact (double n)			//Function of factorial.
{
  double factr = 1;
  for (int a = 1; a <= n; a++)
    factr = factr * a;		//Factorial: 1 * 2 * ... * number
  return factr;
}

double sinus (double ang)		//Function of sinus's formula. Ang = angle.
{
  double sum = 0;
  int b = 1;
  for (float a = 1; a <= 1000; a += 2)
    {
      if (b % 2 == 1)		//In the formula, the sign of the odd term is +, and the sign of the even term is -.
	sum = sum + ((pow (ang, a)) / fact (a));
      else
	sum = sum - ((pow (ang, a)) / fact (a));
      b = b + 1;
    }
  return sum;
}

int main ()
{
  float x, y;

  printf ("Enter the angle you want the sine value to be calculated from.");

  printf ("\nAngle: ");
  scanf ("%f", &x);

  y = x * PI / 180;

  printf ("sin(%.2f) = %.3f", x, sinus (y));
}