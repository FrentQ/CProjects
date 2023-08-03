#include<stdio.h>

int main ()
{
  float a, s, i;
  s = 0;


  for (float a = 1; a <= 6; a++)
    {
      for (float i = 1; i <= 10; i++)
	{
	  s = s + (1.0 / (a + i));
	}

    }

  printf ("s = %.4f", s);

  return 0;
}
