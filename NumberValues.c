#include <stdio.h>

int main () 
{
  
int th, h, t, n;
  
 
printf ("Please enter a four digit number.");
scanf ("%d", &n);
  
 
th = n / 1000;		//Thousands digit.
n = n - th * 1000;		//Number without thousands digit.
h = n / 100;			//Hundreds digit.
n = n - h * 100;		//Number without hundreds and thousands digit.
t = n / 10;			//Tens digit.
n = n - t * 10;		//Number without tens, hundreds and thousands digit.
  

    if (th > 9)			//Five or more digits.
        printf ("Please enter a four digit number.");
  
 
    else if (th == 0)		//Less than three digits.
        printf ("Please enter a four digit number.");
  
 
    else				//Four digit.
        printf ("The digits are in order: %d, %d, %d, %d", th, h, t, n);
  
 
return 0;

}
