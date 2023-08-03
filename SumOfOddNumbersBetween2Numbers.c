#include<stdio.h>

int func (int nf, int nl)		//The function for find the sum of odd numbers that between two numbers.
{
  int a = 0;
  for (nf = nf; nf <= nl; nf++)
    {
      if (nf % 2 == 1)		//Odd numbers are detected here.
	a = a + nf;
      else
	continue;
    }
  return a;
}

int main ()
{
  int n1, n2;

  printf ("Enter a small and a large number in order.");

  printf ("\n\nSmall number: ");
  scanf ("%d", &n1);

  printf ("Large number: ");
  scanf ("%d", &n2);

  if (n1 < n2)			//The first number is smaller.
    printf ("\nThe sum of the odd numbers between these two numbers is: %d",func (n1, n2));
  else if ((n1 > n2) || (n1 == n2))         //If the first number is not smaller than second number, user enters the numbers again.
      printf ("Enter a small and a large number in order.\n");
      
      printf ("Small number: ");
      scanf ("%d", &n1);

      printf ("\nLarge number: ");
      scanf ("%d", &n2);
    }
}
