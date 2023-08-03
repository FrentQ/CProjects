#include<stdio.h>
float alan (float u, float k);	//Area function.

int main ()
{
  float u, k;
  
  printf("Enter the edge lengths of the rectangle. If you enter 0, program will be terminated. \n");
  scanf ("%f%f", &u, &k);
  
  while ((u != 0) && (k != 0))
    {				//Program will use this loop unless at least one of the sides is not equal to 0.
      if ((u > 0) && (k > 0))
	{			//In case of entering two positive values.
	  printf ("Area of the rectangle is: %f\n\n ", alan (u, k));
	  printf
	    ("Enter the edge lengths of the rectangle. If you enter 0, program will be terminated. \n");
	  scanf ("%f%f", &u, &k);
	}
      else
	{			//In case of entering two negative values. User enters lengths again.
	  printf ("Please enter positive lengths.");
	  printf
	    ("Enter the edge lengths of the rectangle. If you enter 0, program will be terminated. \n");
	  scanf ("%f%f", &u, &k);
	}
    }
  printf ("The program is terminating...");	//If user enters 0, the program is terminated.

}

float alan (float u, float k)		//Area function.
{
  float area1 = u * k;		//Area = short edge * long edge

  return area1;
}
