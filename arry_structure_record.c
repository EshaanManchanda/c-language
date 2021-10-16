//write a program for employee record maintain using array of structure
#include <stdio.h>
#include <conio.h>
void main()
{
    int i,size;
    struct emp
    {
        int e_id;
        char e_name[15];
        char dept[15];
        float sal;
    };
    struct emp e1[10];
    //inserting values
    for (i = 0; i <10; i++)
    {
    printf("\n Enter the Details for Employee %d ", i+1);
    printf("\n Enter the Employee ID ");
    scanf("%d", &e1[i].e_id);
    printf("\n Enter the Employee Name ");
    fflush(stdin);
    gets(e1[i].e_name);
    printf("\n Enter the Employee Department ");
    gets(e1[i].dept);
    printf("\n Enter the Employee Salary ");
    scanf("%f", &e1[i].sal);
    }
    for ( i = 0; i < 10; i++)
    {
    printf("\n Record of the Enployee %d",i+1);
    printf("\n Employee id = %d\n Employee name = %s\n Employee Department = %s\n Employee salary = %f", e1[i].e_id, e1[i].e_name, e1[i].dept, e1[i].sal);
       
    }
    
    getch();
}
