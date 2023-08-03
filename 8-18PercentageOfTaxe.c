#include<stdio.h>
int main()
{
    float pri, kdv8, kdv18;
    printf("Enter the label price of the product.\n");
    scanf("%f", &pri);  // The price value that user entered.
    kdv8 = pri * 108/100;  // The price by adding %8 KDV.
    printf("The product's price with 8 percent KDV is: %f\n", kdv8);
    kdv18 = pri * 118/100;  // The price by adding %18 KDV.
    printf("The product's price with 18 percent KDV is: %f\n", kdv18);
    return 0;
}