#include<stdio.h>

int main()
{
    float midt1, fin1, midt2, fin2, avg1, avg2, avg3;
    printf("Enter your midterm and final grade points for the first course.\n");
    scanf("%f%f", &midt1, &fin1);  //User enters the grades for first course.
    avg1 = (midt1 + fin1) / 2;  //Grade point average of first course.
    printf("Your first course's grade point average is: %f\n", avg1);
    printf("Enter your midterm and final grade points for the second course.\n");
    scanf("%f%f", &midt2, &fin2);  //User enters the grades for second course.
    avg2 = (midt2 + fin2) / 2;  //Grade point average of second course.
    printf("Your second course's grade point average is: %f\n\n", avg2);
    avg3 = (avg1 + avg2) / 2;  //Grade point average of these courses.
    printf("GPA of your courses is: %f", avg3);
    return 0;
}