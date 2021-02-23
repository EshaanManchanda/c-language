#include<stdio.h>
#include<conio.h>
#include<math.h>
float c_intrest(float, float, float);
float s_intrest(float, float, float);
void main()
{
    float p,r,t,ci,si;
    int e=0;
    char j,j2;
    do
    {
    printf("\n Enter the prncipal - ");
    scanf("%f",&p);
    printf("\n Enter the Rate of Intrest - ");
    scanf("%f",&r);
    printf("\n Enter the Time - ");
    scanf("%f",&t);
    printf("\n Pleas enter 'c' for compound intrest or 's' for simple intrest =  ");
    scanf("%s",&j);
    if (j=='c')
    {
        ci=c_intrest(p,r,t);
        printf("\n Compound Intrest = %f",ci);
    }
    else if (j=='s')
    {
        si=s_intrest(p,r,t);
        printf("\n Simple Intrest = %f",si);   
    }
    printf("\n If you want to continou press 'y' or press 'n' for exit = ");
    scanf("%s",&j2);
    if (j2=='y')
    {
        e=1;
    }
    else
    {
        e=0;
        printf("\n Thank you for using my programm");
    }
    } while (e==1);
    getch();
}
float c_intrest(float p,float r, float t)
{
    float ci,a;
    a=(1+r/100);
    a=(pow(a,t));
    ci=(p*(a)-p);
    // ci=(pow(ci,t));
    return(ci);
}
float s_intrest(float p, float r , float t)
{
    float si;
    si=(p*r*t)/100;
    return(si);

}