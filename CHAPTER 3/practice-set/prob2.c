/*

Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.

*/

#include<stdio.h>

int main()
{
    int Hindi, English, Sanskrit;
    
    // get marks form user
    printf("Enter marks of Hindi : \n");
    scanf("%d", &Hindi);
    
    printf("Enter marks of English : \n");
    scanf("%d", &English);

    printf("Enter marks of Sanskrit : \n");
    scanf("%d", &Sanskrit);

    int total = Hindi + English + Sanskrit;
    printf("[Your marks are %d, %d and %d] ---Total mark is : %d---\n\n", Hindi, English, Sanskrit, total);

    if(Hindi<33 || English<33 || Sanskrit<33)
    {
        printf("You are failed  due to less mark in individual subjects...\n");
    }
    else if(total/3 < 40)
    {
        printf("You are fialed due to less percentage...\n");
    }
    else
    {
        printf("You are passed...\n");
    }


    /*int totalM = Hindi + English + Sanskrit;
    int Percentage = totalM / 300;
    printf("Your Percentage is : %d", Percentage);

    int perHindi = (Hindi * 100) / 100;
    int perEnglish = (English * 100) / 100;
    int perSanskrit = (Sanskrit * 100) / 100;

    if(perHindi < 33)
    {
        printf("[Over all your percentage is %d.\n But You are fail in Hndi.\n Do hard work for next time..]\n\n");
    }
    else
    {
        if(Percentage >= 40)
        {
            printf("Your over all percentage is : %d", Percentage);
            printf("Congratulations... You are Passed...\n\n");
        }
    }

    if(perEnglish < 33)
    {
        printf("Over all your percentage is %d.\n But You are fail in English.\n Do hard work for next time..\n\n");
    }

    if(perSanskrit < 33)
    {
        printf("Over all your percentage is %d.\n But You are fail in Snskrit.\n Do hard work for next time..\n\n");
    }
    */

    return 0;
}