/*

Write a program to find greatest of four numbers entered by the user.

*/

#include<stdio.h>

int main()
{
    int one,two,three,four;
    printf("Enter first number : ");
    scanf("%d", &one);

    printf("Enter second number : ");
    scanf("%d", &two);

    printf("Enter third number : ");
    scanf("%d", &three);

    printf("Enter fourth number : ");
    scanf("%d", &four);

    if(one > two)
    {
        if(one > three)
        {
            if(one > four)
            {
                printf("Greatest number is : %d", one);
            }
        }
    }
    else if(two > three)
    {
        if(two > four)
        {
            printf("Greatest number is : %d", two);
        }

    }
    else if(three > four)
    {
        printf("Greatest number is : %d", three);
    }
    else
    {
        printf("Greatest number is : %d", four);
    }
    
    // if(one > two && one > three && one > four)
    // {
    //     printf("Greatest number is : %d", one);
    // }
    // if(two > one && two > three && two > four)
    // {
    //     printf("Greatest number is : %d", two);
    // }
    // if(three > two && three > one && three > four)
    // {
    //     printf("Greatest number is : %d", three);
    // }
    // if(four > two && four > three && four > one)
    // {
    //     printf("Greatest number is : %d", one);
    // }


     return 0;
}