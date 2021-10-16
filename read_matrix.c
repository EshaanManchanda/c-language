#include <stdio.h>
#include <conio.h>
#define row 3
#define col 3
#define arow 10
#define acol 10
void main()
// this is for read
{
    int i,j,m[arow][acol];
    for(i=0;i< row;i++)
    {
        for(j=0;j< col;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
    getch();
}