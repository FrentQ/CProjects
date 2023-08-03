#include<stdio.h>
int main()
{
    int a, hun, ten;
    float avg, a1, hun1;
    printf("Enter a three digit positive number.\n");  //three digits number that user entered.
    scanf("%d", &a);
    hun = a / 100;  //Hundreds digit.
    printf("Hundreds digit of the number is %d\n", hun);
    a = a - hun * 100;
    ten = a / 10;  //Tens digit.
    printf("Tens digit of the number is %d\n", ten);
    a = a - ten * 10;  //Ones digit.
    printf("Ones digit of the number is %d\n", a);
    a1 = a;   
    hun1 = hun;  //I defined a→a1 and hun→hun1 because otherwise the result would not be true.
    avg = (a1 + hun1) / 2;  //The average of ones and hundreds digits.
    printf("The average of ones and hundreds digits is %f\n", avg); 
    return 0;   
}