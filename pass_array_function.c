#include <stdio.h>
#include <conio.h>
#include <string.h>
// char concar(char,char);
void main()
{
    char str1[20], str2[20];
    printf("\n Enter the first string - ");
    scanf("%s", &str1);
    printf("\n Enter the second string - ");
    scanf("%s", &str2);
    printf("\n this function is used for the concat both string");
    concat(str1, str2);
    lenth(str1, str2);
    getch();
}
concat(char s1[], char s2[])
{
    strcat(s1, s2);
    printf("\n this is result from %s ", s1);
}
lenth(char l1[], char l2[])
{
    int len1, len2;
    len1 = strlen(l1);
    len2 = strlen(l2);
    printf("\n this is the length of the string 1 = %d ",len1);
    printf("\n this is the length of the string 2 = %d ",len2);
}