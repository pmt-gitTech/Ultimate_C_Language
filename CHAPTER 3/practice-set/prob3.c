/*

Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab    Tax
 2.5 – 5.0L     5%
 5.0L - 10.0L   20%
 Above 10.0L    30%

*/

#include<stdio.h>

int main()
{
    int income;
    int tax = 0;
    printf("Enter your income : ");
    scanf("%d", &income);

    if(income <= 250000)
    {
        tax = 0;
        printf("Your inome is less than 250000 therefore you do not have to pay tax...\n");
    }
    else if(income > 250000 && income <=500000)
    {
        tax = 0.5 * (income - 250000);
        printf("You have to pay %d tax from your income which is '5 Percentage'...", tax);
    }
    else if(income > 500000 && income <= 1000000)
    {
        tax = 0.5 * (income - 250000);
        printf("You have to pay %d tax from your income which is '20 Percentage'...", tax);
    }
    else if(income > 1000000)
    {
        tax = 0.5 * (income - 250000);
        printf("You have to pay %d tax from your income which is '20 Percentage'...", tax);
    }

    // if(tax==0)
    // {
    //     printf("Your inome is less than 250000 therefore you do not have to pay tax...\n");
    // }
    // else
    // {
    //     printf("You have to pay %d tax from your income...", tax);
    // }
    
    return 0;
}