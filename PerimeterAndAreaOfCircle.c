#include<stdio.h>
#define PI 22./7.  //π = 22/7
int main()
{
    float per, area, rad;
    printf("Enter the radius of circle.\n");
    scanf("%f", &rad);  //User defines the value of radius.
    per = 2 * PI * rad;  //The formula of perimeter.
    printf("Perimeter of the circle is: %f\n", per);
    area = PI * rad * rad;  //The formula of area.
    printf("Area of the circle is: %f\n", area);
    return 0;
}