#include<stdio.h>

int main ()
{
  int y, r;			// y = year and r = remainder.

  printf ("Enter the year.\n");
  scanf ("%d", &y);

  r = (y % 4);			// Leap year must be divisible by 4.

    if (r == 0)
        printf ("This year is a leap year.");

    else
        printf ("This year is not a leap year.");
  return 0;
}
