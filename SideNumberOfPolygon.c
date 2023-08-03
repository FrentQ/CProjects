#include<stdio.h>
int main ()
{
    int ang, sid;
    printf("Enter the exterior angle of a regular polygon.\n");
    scanf("%d", &ang);  //User defined the value of exterior angle.
    sid = 360 / ang;  //Regular polygon's side formula.
    printf("This regular polygon's side number is: %d\n", sid);
    return 0;
}