#include<stdio.h>
int main () 
{
  
int x, sum, num;
float avg;
  
printf("Enter the number of elements of the array. Please enter only the number of elements: ");
  
scanf("%d", &x);
  
int a[x];
  
if (x % 2 == 1)
    {				//Queries whether the number of elements is odd or not. In order to have 3 terms in the middle, the number of elements must be odd.
      for (int i = 0; i < x; i++)
	{			//Assigns values to the array.
	  printf("Enter the elements of this array in order: ");
	  scanf("%d", &num);
	  a[i] = num;
	} 
 
sum = a[x / 2 - 1] + a[x / 2] + a[x / 2 + 1];
      
avg = sum / 3.0;
      
printf("\n\nAverage of the middle three elements is: %.2f", avg);
}
  
  else
    printf("Please enter only the number of elements.");
}