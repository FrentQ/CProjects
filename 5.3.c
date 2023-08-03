#include<stdio.h>
int main ()
{
  int x, num, a[x];

  printf ("Enter the number of elements of the array: ");
  scanf ("%d", &x);

  for (int i = 0; i < x; i++)
    {				//Loop assigning value to array.
      printf ("Enter an element of the array: ");
      scanf ("%d", &num);
      a[i] = num;
    }

  printf ("\n\n%s%13s%17s\n", "Element", "Value", "Histogram");	//The header of the table.

  for (int b = 0; b < x; b++)
    {				//Loop to enter values for Element and Value headers.
      printf ("%7d%13d         ", b, a[b]);

      for (int c = 1; c <= a[b]; c++)	//Loop with an asterisk for the histogram title.
	  printf ("%c", '*');

      puts ("");
    }
}