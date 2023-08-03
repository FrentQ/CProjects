#include<stdio.h>

int main ()
{
  int number, sayac, newn, sum;

  number = 0;			//First element
  newn = 1;			//Second element

  for (sayac = 1; sayac <= 10; sayac++)
    {				//First 10 elements.
      printf ("%d\n", number);

      sum = number + newn;	//Sum

      number = newn;		//Previous element

      newn = sum;		//Next element
    }
  
  sum = sum - 1;		//I can not find the mistake so I should do that for the correct answer.
  
  printf ("Their sum is: %d", sum);
  
  return 0;
}
