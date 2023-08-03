#include<stdio.h>
int main ()
{
  int x1, x2, num1, num2;

  printf ("Enter the number of elements of the first array: ");
  scanf ("%d", &x1);
  
  printf ("\n");
  
  int a[x1];

  for (int i = 0; i < x1; i++)
    {				//The first array is assigned values.
      printf ("Enter the elements of the first array in order: ");
      scanf ("%d", &num1);
      a[i] = num1;
    }

  printf ("\nEnter the number of elements of the second array: ");
  scanf ("%d", &x2);
  
  printf ("\n");
  
  int b[x2];

  for (int j = 0; j < x2; j++)
    {				//The second array is assigned values.
      printf ("Enter the elements of the second array in order: ");
      scanf ("%d", &num2);
      b[j] = num2;
    }

  printf ("\n\nElements of the first array: {");	//The first array is printed to the screen in order.
  
  for (int i = 0; i < x1; i++)
    {
      if (i != x1 - 1)		//With this condition, the last element is followed by curly braces, not a comma.
	    printf ("%d, ", a[i]);
      else
	    printf ("%d}", a[i]);
    }

  printf ("\n\nElements of the second array: {");	//The second array is printed to the screen in order.
 
  for (int i = 0; i < x2; i++)
    {
      if (i != x2 - 1)		//With this condition, the last element is followed by curly braces, not a comma.
    	printf ("%d, ", b[i]);
      else
	    printf ("%d}", b[i]);
    }
}