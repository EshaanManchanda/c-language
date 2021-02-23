#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
    char s[20],r[20];
    int l,i,count;
    printf("\n Enter the string = ");
    gets(s);
    count=strlen(s);
    i=count-1;
    for (l = 0; l < count; l++)
    {
        r[l]=s[i];
        i--;

    }
    // r[l]='%0';
    printf("\n the reverse name is = %s",r);
    getch();
    

}