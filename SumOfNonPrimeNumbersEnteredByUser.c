#include<stdio.h>
int prime (int n)			//Function that checks primality.
{
  int a;
  a = 0;			//a is a controller. If a is different from 0, the number is not prime.
  for (int i = 2; i < n; i++)
    {				//Whether the number is prime or not, it is divisible by itself and by one. That's why I left this possibility out of the loop.
      if ((n % i) == 0)
	{
	  a = a + 1;
	}
      else
	continue;
    }
  return a;
}

int sum (int number)		//If the number is not prime, this function finds the sum of its factors.
{
  int k = 0;			//k is the sum of the factors of a non-prime number.
  for (int j = 1; j <= number; j++)
    {				//The number is divided by numbers starting from 1 up to itself.
      if ((number % j) == 0)	//If the remainder in this quotient equals zero, the divisor is added to the total.
	k = k + j;
      else
	continue;
    }
  return k;
}


int main ()
{
  int num, prim, sum1;

  printf("Enter a positive number. If you enter 0, program will be terminated.\n");
  scanf("%d", &num);

  while (num != 0)
    {				//The program continues as long as the number is not equal to 0.
      if (num > 0)
	{			//Number is positive.
	  prim = prime (num);
	  if (prim != 0)
	    {			//Number is non-prime.
	      printf("The sum of the factors of this number is: %d\n", sum (num));

	      printf("\nEnter a positive number. If you enter 0, program will be terminated.\n");
	      scanf("%d", &num);
	    }
	  else if (prim == 0)
	    {			//Number is prime.
	      sum1 = 1 + num;
	      printf("The sum of the factors of this number is: %d\n", sum1);
	      printf("\nEnter a positive number. If you enter 0, program will be terminated.\n");
	      scanf("%d", &num);
	    }

	}
      else if (num < 0)
	{			//Number is negative
	  printf("\nEnter a positive number. If you enter 0, program will be terminated.\n");
	  scanf("%d", &num);
	}

    }
  printf("You enter zero. Program is terminating...");
}