#include <stdio.h>
#include <conio.h>
    struct student
    {
        char name[20];
        int Rollno;
        int english;
        int maths;
        int science;
        int hindi;
        int sst;
    };
void main()
{
    int i,avg;
    struct student stu[5];
    for (i = 0; i <5; i++)
    {
    printf("\n Enter the Details for Student %d ", i+1);
    printf("\nenter the name=");
    scanf("%s", &stu[i].name);
    printf("\nenter student Roll no=");
    scanf("%d", &stu[i].Rollno);
    printf("\n NOW enter the marks fo the student's");
    printf("\n English = ");
    scanf("%d", &stu[i].english);
    printf("\n Maths = ");
    scanf("%d", &stu[i].maths);
    printf("\n Since = ");
    scanf("%d", &stu[i].science);
    printf("\n Hindi = ");
    scanf("%d", &stu[i].hindi);
    printf("\n SST = ");
    scanf("%d", &stu[i].sst);
    }
    
     for ( i = 0; i <5; i++)
    {
        avg=(stu[i].english+stu[i].maths+stu[i].science+stu[i].hindi+stu[i].sst)%500;
    printf("\n Record of the student %d",i+1);
    printf("The name of the student = %s\nThe roll number of student = %d\n this is the marks of student \nEnglish=%d , Maths=%d , Science=%d , Hindi= %d ,SST= %d.\n the avrage of marks = %d", stu[i].name, stu[i].Rollno,stu[i].english,stu[i].maths,stu[i].science,stu[i].hindi,stu[i].sst,avg);
    }
    getch();
}
