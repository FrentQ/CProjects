#include<stdio.h>

int main ()
{
  int space, space2, star, n, line;

  n = 1;

  for (line = 5; line >= 1; line--) {				//Line number. 5 at the top, 1 at the bottom.
      
      for (space = 1; space < line; space++) {			//Number of spaces for the left of the star.
	  printf (" ");
	
          
    }
      
      for (star = 1; star <= n; star++) {			//Number of stars.
	  printf ("*");

	}
      
      for (space2 = 1; space2 < line; space2++) {			//Number of spaces for the right of the star.
	  printf (" ");
	  
	}
      
      printf ("\n");
      n = n + 2;
    
      
  }

  return 0;
}
