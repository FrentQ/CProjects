#include<stdio.h>

int main ()
{
  int  e, n;
  float s;

  printf ("Enter the start and end numbers.");
  scanf ("%f%d", &s, &e);

  n = s;        //Number = Start number.

  while (n < e)     //Number is smaller than the end number.
    {
      ++n;      //Number increases one by one.
      s = s + n;        //Sum = start number (sum) + number (it increases).
    }

  s = (s / 5.);     //Sum = sum/5
  printf ("The sum is %.2f", s);

  return 0;

}
