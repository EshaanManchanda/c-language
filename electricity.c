#include <stdio.h>
#include <conio.h>
void main()
{
    float r /* r is for reading */, cr/* cr is for the current reading */, lr/* lr for the last reading according to bill */, nod/* nod is for the number of days between the last reading and current reading */, sr/* sr meams 400 units divide by 30 per day reading consumption */ = 13.34, st/*st is for the 200/30 for 0 bill amount */ = 6.67, rt, rs, f/* meter reading according to 200 units*/,e/* meter reading according to 400 units*/;
    printf("\nEnter last reading - ");
    scanf("%f", &lr);
    printf("\nEnter current reading - ");
    scanf("%f", &cr);
    printf("\nEnter number of days - ");
    scanf("%f", &nod);

    r = cr - lr;
    printf("this is the reading - %f", r);
    e=nod*sr;
    f = nod * st;
    rs = r - e;
    rt = r - f;
    if (r <= f)
    {

        printf("\nyou bill is '0' . Enjoy ");
    }
    else if (r <= e)
    {

        printf("\nbill offer ma hai your bill is under 400 units ");
    }

    else
    {

       printf("\n bill jyada aaya ga ");
    }
    getch();
}
