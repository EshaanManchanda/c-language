//Q1) write a programm to accept 3 strings from the user the programm should compare the first and 2 strings for equality if they are diffrent , programm should concanitate the first string and second string and store the result in first string . the programm should then display all 3 strings and their coresponding lengths . if (1=2) ,1+3 result store in =1
// Q2) write a programm to calculate the simple intrest for the given principle , rate of intrest , time . with 3 parameters should be passed in user defined function . function should return the intrest , address to the respactive calling function 
// passing array 
// working of function passing string as an argument.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20],str3[20];
    int c,l1,l2,l3;
    printf("\n Enter the first string - ");
    scanf("%s",&str1);
    printf("\n Enter the second string - ");
    scanf("%s",&str2);
    printf("\n Enter the third string - ");
    scanf("%s",&str3);
    c=(strcmp(str1,str2));
    if(c==1)
    {
        concat(str1,str3);
        lenth(str1,str2,str3);
    }
    else if (c==0)
    {
        concat(str1,str2);
        lenth(str1,str2,str3);
    }
        
    else
    {
        printf("\n you enter invalid data!!!!");
    }
    getch();
}
concat(char s1[], char s2[])
{
    strcat(s1, s2);
    printf("\n this is result from %s ", s1);
}
lenth(char l1[], char l2[],char l3[])
{
    int len1, len2, len3;
    len1 = strlen(l1);
    len2 = strlen(l2);
    len3 = strlen(l3);
    printf("\n this is the length of the string 1 = %d ",len1);
    printf("\n this is the length of the string 2 = %d ",len2);
    printf("\n this is the length of the string 3 = %d ",len3);
}
