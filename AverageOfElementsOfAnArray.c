#include<stdio.h>
int main ()
{
  float num, sum, son, art;	//son: average
  int x;
  
  sum = 0;
  
  printf ("Enter the first element of array: ");
  scanf ("%f", &num);
  
  printf ("Enter the element number of array: ");
  scanf ("%d", &x);
  
  printf ("Enter the increment amount of the elements of the array: ");
  scanf ("%f", &art);

  sum = 0, 0;
  float a[x];
  
  for (int j = 0; j < x; j++)
    {				//In this loop, elements are printed on the screen one by one.
      a[j] = num;		//Value is assigned to the elements of the array.
      printf ("\na[%d] = %.2f", j, a[j]);
      num = num + art;		//The value to be assigned increases.
      sum = sum + a[j];		//The sum of the elements is calculated.
    }

  son = sum / x;		//The average of the elements is calculated.

  printf ("\n\nAverage of the elements of this array is: %.2f", son);
}
