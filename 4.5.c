#include<stdio.h>
float calculatepayment (float h)	//Function of payment.
{
  float p;
  if (h <= 3)
    {				//If hour is smaller than 3, charge is 2 TL:.
      p = 2;
    }
  else if (h > 3)
    {				//If hour is greater than 3, charge increas.
      h = h - 3;
      p = 2 + (h * 0.5);	//Payment formula.
      if (p > 10)		//Maximum charge is 10 TL:.
	p = 10;
      else if (p < 10)
	p = p;
    }
}

int main ()
{
  float h1, h2, h3;
  h1 = 1.5;
  h2 = 4.0;
  h3 = 24.0;

  printf ("\nCustomer          Hour          Charge\n\n");
  printf ("Customer 1        %.1f hours            %.1f TL:\n", h1,calculatepayment (h1));
  printf ("Customer 2        %.1f hours           %.1f TL:\n", h2,calculatepayment (h2));
  printf ("Customer 2        %.1f hours          %.1f TL:\n", h3,calculatepayment (h3));
}
