#include<stdio.h>
int main( )
{
 float a,b,counter=1,res,INS;
 float performance_measure;
 printf("Enter the number 1: ");
 scanf("%f",&a);
 printf("Enter the number 2: ");
 scanf("%f",&b);
 counter  =counter+1;
 res=a && b;
 counter=counter+2;
 printf("enter no.of instruction:");
 scanf("%f",&INS);
 performance_measure=INS/counter;
 printf("performance_measure:%f  ",performance_measure);
 return 0;

}
