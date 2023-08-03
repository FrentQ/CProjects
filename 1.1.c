#include<stdio.h>
int main()
{
int x, y;  // I defined x and y as integers.
    printf("Enter an integer:\n");
    scanf("%d", &x);  // x value entered by user.
    y = x/2;
    printf("%d\n", x);  
    printf("number = %d\n\n", x );
    printf("number/2 = %d", y);
return 0;
}