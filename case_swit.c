#include<stdio.h>
#include<conio.h>
int main()
{
    int day;
    printf("enter no of day within 0-6\n");
    scanf("%d",&day);
    switch (day)
    {
    case 0: printf("Sunday");
        break;
    case 1: printf("Monday");
        break;
    case 2: printf("Tuesday");
        break;
    case 3: printf("Wednesday");
        break;
    case 4: printf("Thusday");
        break;
    case 5: printf("Friday");
        break;
    case 6: printf("Saturday");
        break;
    default:printf("you enter wrong value!\n");
        break;
    }
}