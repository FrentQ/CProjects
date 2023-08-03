#include<stdio.h>
#include<math.h>

int main ()
{

float a, b, c, d, d1, x1, x2;

printf("Enter the coefficients of x^2 and x and the constant number in this order.\n");
scanf("%f%f%f", &a, &b, &c);  //User enters the coefficients.

d = b * b - (4.0 * a * c);  //The formula of delta.
x1 = (-b - sqrt(d)) / 2.0 * a;  //The formula for a root.
x2 = (-b + sqrt(d)) / 2.0 * a;  //The formula for another root.

  if (d > 0)  //If delta is greater than zero, this equation has two roots.
    printf("This second degree equation has two roots and the roots are: %f and %f", x1, x2);

  else if (d == 0)  //If delta is equal to zero, this equation has just a root.
    printf ("This second degree equation has one root and the root is: %f", x1);
  else  //If delta is smaller than 
    printf ("This second degree equation does not have any roots.");

  return 0;

}
