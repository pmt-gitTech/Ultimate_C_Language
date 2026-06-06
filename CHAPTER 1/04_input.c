#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a); //we can't write msg which scanf() function
    printf("Entered int number is : %d\n", a);

    float b;
    scanf("%f", &b); 
    printf("Entered float number is : %f\n", b);

    char c;
    scanf(" %c", &c); // " %c" in this space means they are not consider \n , space as a input
    printf("Entered char number is : %c\n", c);
    
    return 0;
}