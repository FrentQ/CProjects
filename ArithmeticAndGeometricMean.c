#include<stdio.h>
#include<math.h>
int main()
{
    float n1, n2, artm, geo;
    int artm1, geo1;
    printf("Enter two numbers.\n");
    scanf("%f%f", &n1, &n2);  //User defines the numbers.
    artm = (n1+n2)/2;  //Arithmetic mean of these numbers.
    artm1 = artm + 0.5;  //I added 0.5 because I don't know another way for round numbers.
    printf("Arithmetic mean of these two numbers is: %d\n", artm1);
    geo = n1 * n2;  //First step of geometric mean of these numbers.
    geo = sqrt(geo);  //Second step of geometric mean of these numbers.
    geo1 = geo + 0.5;  //I added 0.5 because I don't know another way for round numbers.
    printf("Geometric mean of these two numbers is: %d", geo1);
    return 0;
}