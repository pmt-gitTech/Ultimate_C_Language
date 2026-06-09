/*

write a program to findgrade of a student given his markes based on below:
90-100 -> A
80-90  -> B
70-80  -> C
60-70  -> D
50-60  -> E
<50    -> F

*/

#include <stdio.h>

int main()
{
    printf("--> This is program of find grade according student's marks <--\n");
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Your Grade is A... You are excellent...\n");
    }
    else if (marks >= 80 && marks <= 90)
    {
        printf("Your Grade is B... You are good...\n");
    }
    else if (marks >= 70 && marks <= 80)
    {
        printf("Your Grade is C... You can do better...\n");
    }
    else if (marks >= 60 && marks <= 70)
    {
        printf("Your Grade is D... You are on average...\n");
    }
    else if (marks >= 50 && marks <= 60)
    {
        printf("Your Grade is E... You have to do hard work...\n");
    }
    else if (marks < 50)
    {
        printf("Your Grade is F... You are failed in exam...\n");
    }

    return 0;
}