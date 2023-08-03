#include<stdio.h>

float gpa (float m1, float m2, float f1, float f2)	//GPA function.
{
  float c1, c2, a;
  c1 = (m1 * 0.4) + (f1 * 0.6);	//First course's grade average.
  c2 = (m2 * 0.4) + (f2 * 0.6);	//Second course's grade average.
  a = (c1 + c2) / 2.0;		//GPA
  return a;
}

int main ()
{
  float m1, f1, m2, f2, c1, c2;
  int y;
  y = 3;
  
  for (int x = 1; x <= y; x++)
    {				//The loop will run three times.
      printf("\nEnter the midterm and final grade for the %d. student's first course, respectively\n",x);
      scanf("%f%f", &m1, &f1);	//First midterm and final.
      
      printf("Enter the midterm and final grade for the %d. student's first course, respectively\n",x);
      scanf ("%f%f", &m2, &f2);	//Second midterm and final.

      printf ("%d. student's GPA is: %f\n", x, gpa (m1, m2, f1, f2));
    }
}
