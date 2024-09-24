#include<stdio.h>
void main()
{
    int months,weekdays ;
    printf("enter the month number : ");
    scanf("%d",&months);
    printf("entert the weekdays number : ");
    scanf("%d",&weekdays);

    switch (months)
    {
    case 1 :
        printf("the month is january\n");
        break;

    case 2 :
        printf("the month is Febuary\n");
        break;

    case 3 :
        printf("the month is March\n");
        break;

    case 4 :
        printf("the month is April\n");
        break;
    
    case 5 :
        printf("the month is May\n");
        break;
    
    case 6 :
        printf("the month is June\n");
        break;

    case 7 :
        printf("the month is July\n");
        break;
    
    case 8 :
        printf("the month is August\n");
        break;
    
    case 9 :
        printf("the month is September\n");
        break;

    case 10 :
        printf("the month is October\n");
        break;

    case 11 :
        printf("the month is November\n");
        break;

    case 12 :
        printf("the month is December\n");
        break;
    
    default:
        printf("invalid\n");
        break;
    }
    
        switch (weekdays) 
    {
    case 1 :
        printf("the day is Monday\n");
        break;

    case 2 :
        printf("the day is Tuesday\n");
        break;

    case 3 :
        printf("the day is Wednesday\n");
        break;

    case 4 :
        printf("the day is Thursday\n");
        break;
    
    case 5 :
        printf("the day is Friday\n");
        break;
    
    case 6 :
        printf("the day is Saturday\n");
        break;

    case 7 :
        printf("the day is Sunday\n");
        break;

    default:
        printf("invalid\n");
        break;
    }

}
