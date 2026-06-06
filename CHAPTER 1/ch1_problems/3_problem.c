/*
Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
*/

#include<stdio.h>

int main()
{
    float c=10.5;
    float f;
   // f=(c * (9/5)) + 32;
   f = (9.0 / 5.0) * c + 32; 
   printf("Our Celsuis Temperature is : %f\n", c);
    printf("Celsius (Centigrade degrees temperature) to Fahrenheit is : %f", f);

     return 0;
}