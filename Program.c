#include <stdio.h>

int main()
{
    char name[20],
    char country[20],
    char skill[20];
    int age;
    printf("Welcome to Hacktoberfest 2020\n");
    printf("Enter your name : ");//Get User name
    scanf("%s",&name);
    printf("Enter your Country of Residance : ");//Get user country
    scanf("%s",&country);
    printf("Enter your Age : ");//Get user Age
    printf("%d",&age);
    printf("Rate your programmings skills from A-D (A being the highest and D being the lowest : ");//Get user skill level
    scanf(" %s",&skill);
    scanf("Thank you %c Happy Hacking",country);//Thank the user

    return 0;
}
