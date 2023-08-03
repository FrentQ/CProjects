#include<stdio.h>

int main ()
{
  
 int a, b, c;

 printf ("Enter three different integers.\n");
 scanf ("%d%d%d", &a, &b, &c);      //User enters the integers.

    if (a < b && b < c) {       //First condition: a<b<c
        printf ("The sort is: %d < %d < %d", a, b, c);
    }


    else if (a < c && c < b) {      //Second condition: a<c<b
        printf ("The sort is: %d < %d < %d", a, c, b);
    }

    
    else if (b < a && a < c) {      //Third condition: b<a<c
        printf ("The sort is: %d < %d < %d", b, a, c);
    }


    else if (b < c && c < a) {      //Fourth condition: b<c<a
        printf ("The sort is: %d < %d < %d", b, c, a);
    }


    else if (c < a && a < b) {      //Fifth condition: c<a<b
        printf ("The sort is: %d < %d < %d", c, a, b);
    }


    else if (c < b && b < a) {      //Sixth condition: c<b<a
        printf ("The sort is: %d < %d < %d", c, b, a);
    }
    

    else {      //Probably two of them or all of them are equal to each other or user did not enter an integer.
        printf ("You should enter different integers.");
    }


  return 0;
}
