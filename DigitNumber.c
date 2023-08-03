#include <stdio.h>

int main () 
{
  
int n, h, t;
  
 
printf("Enter a number. Please do not enter a number that has four or more digits.\n");
scanf ("%d", &n);
  
 
h = n / 100;		//Hundreds digit.
n = n - h * 100;		//The number without its hundreds digit.
t = n / 10;			//Tens digit.
n = n - t * 10;		//The number without its hundreds and tens digits.
  
    
    if (h > 9)			//If hundreds digit is greater than 9, this number is a number that has 4 or more digits.
        printf ("Please do not enter a number that has four or more digits.");
  
 
    else if (h > 0)		//Three digit number.
        printf ("This integer has three digits.");
  
 
    else if (h == 0 && t > 0)	//Two digit number.
        printf ("This integer has two digits.");
  
 
    else if (h == 0 && t == 0 && n > 0)	//One digit number.
        printf ("This integer has one digit.");
  
 
    else				//Zero
        printf ("Do not enter zero.");
  
 
return 0;

 
}
