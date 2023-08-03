#include<stdio.h>

int
stl (int x, int a[x])
{
  int temp;
  for (int i = 0; i < x; i++)
    {
      for (int j = 1 + i; j < x; j++)
	{
	  if (a[j] < a[i])
	    {
	      temp = a[i];
	      a[i] = a[j];
	      a[j] = temp;
	    }
	}
    }
  return a[0];
}

int
lts (int x, int a[x])
{
  int temp;
  for (int i = 0; i < x; i++)
    {
      for (int j = 1 + i; i < x; j++)
	{
	  if (a[i] < a[j])
	    {
	      temp = a[j];
	      a[j] = a[i];
	      a[i] = temp;
	    }
	  else
	    continue;
	}
    }
  return a[x - 1];
}

int
main ()
{
  int x, num;

  printf ("Enter the number of elements of the array: ");
  scanf ("%d", &x);
  int a[x];
  for (int i = 0; i < x; i++)
    {
      printf ("Enter the elements of the array in order: ");
      scanf ("%d", &num);
      a[i] = num;
    }
  printf ("\n\nThe smallest element of the array: %d", stl (x, a));
  printf ("\nThe largest element of the array: %d", lts (x, a));
}
