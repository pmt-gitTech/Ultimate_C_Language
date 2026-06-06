/*
Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height
*/

#include<stdio.h>

int main()
{
    int radius=6;
    int height=10;
    printf("The are of the circle with radius : %d is %f\n", radius, 3.14*radius*radius);
    printf("The volume of the cylinder with radius %d and height %d is %f", radius, height, 3.14*radius*radius*height);

     return 0;
}