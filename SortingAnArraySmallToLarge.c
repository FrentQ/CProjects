#include<stdio.h>
int main ()
{
  int temp, x, num;

  printf ("Enter the number of elements of the array: ");
  scanf ("%d", &x);
  
  int a[x];
  
  for (int i = 0; i < x; i++)
    {				//Loop that assigns the elements of the array.
      printf ("Enter the elements of the array in order: ");
      scanf ("%d", &num);
      a[i] = num;		//Values are assigned to their places in the array in order here.
    }
  
  for (int i = 0; i < x; i++)
    {				//In this loop, the elements are sorted from smallest to largest.
      
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

  printf("The order of the elements of array A, from smallest to largest: {");
  
  for (int k = 0; k < x; k++)
    {				//In this loop, the elements of the array are printed on the screen from smallest to largest.
      if (k != (x - 1))
	    printf ("%d, ", a[k]);
      else
	    printf ("%d}", a[k]);
    }
}
