#include<stdio.h>

int main ()
{
  float n1, n2, c, s1, s2, s3;

  printf("Enter two positive integers for calculate their combinations. First number is number of elements and second number is number of choices. If you enter 0, the program will be terminated.\n");
  scanf ("%f%f", &n1, &n2);	//User enters the numbers of elements and choises.

  if (n1 == 0 || n2 == 0)	//Terminate condition.
    printf ("Program is terminating.");

  while (n1 < 0 || n1 <= n2) {				//Number of elements can't be negative or smaller than the number of choices.
      printf
	("Please enter a positive integer as first number. Do not enter a smaller number than second number.\n");
      scanf ("%f", &n1);
    }


  while (n2 < 0 || n2 >= n1) {				//Number of choices can't be negative or greater than the number of elements.
      printf
	("Please enter a positive integer as second number. Do not enter a greater number than first number.\n");
      scanf ("%f", &n2);
    }



  s1 = 1;			//The numerator
  for (float a = 1; a <= n1; a++) {
      s1 = s1 * a;		//Numerator's factorial.
    }

  s2 = 1;			//Denominator
  for (float d = 1; d <= n2; d++) {
      s2 = s2 * d;		//A part of denominator's factorial.
    }

  s3 = 1;			//Denominator
  for (float b = 1; b <= (n1 - n2); b++) {
      s3 = s3 * b;		//A part of denominator's factorial.
    }

  
  c = s1 / (s2 * s3);		//Formula of combination.

  printf ("These two number's combination is: %.1f\n", c);

  return 0;
}
