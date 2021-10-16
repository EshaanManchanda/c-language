#include <stdio.h>
#include <conio.h>
void main()
{
    struct emp
    {
        int e_id;
        char e_name[15];
        char dept[15];
        float sal;
    };
    struct emp e1, e2;
    //inserting values
    printf("\n Enter the Details for Employee 1 ");
    fflush(stdin);
    printf("\n Enter the Employee ID ");
    fflush(stdin);
    scanf("%d", &e1.e_id);
    printf("\n Enter the Employee Name ");
    fflush(stdin);
    gets(e1.e_name);
    printf("\n Enter the Employee Department ");
    fflush(stdin);
    gets(e1.dept);
    printf("\n Enter the Employee Salary ");
    fflush(stdin);
    scanf("%f", &e1.sal);
    printf("\n Enter the hDetails for Employee 2 ");
    printf("\n Enter the Employee ID ");
    fflush(stdin);
    scanf("%d", &e2.e_id);
    printf("\n Enter the Employee Name ");
    fflush(stdin);
    gets(e2.e_name);
    printf("\n Enter the Employee Department ");
    fflush(stdin);
    gets(e2.dept);
    printf("\n Enter the Employee Salary ");
    fflush(stdin);
    scanf("%f", &e2.sal);
    printf("\n Record of the Enployee 1");
    printf("\n Employee id = %d\n Employee name = %s\n Employee Department = %s\n Employee salary = %f", e1.e_id, e1.e_name, e1.dept, e1.sal);
    printf("\n Record of the Enployee 2");
    printf("\n Employee id = %d\n Employee name = %s\n Employee Department = %s\n Employee salary = %f", e2.e_id, e2.e_name, e2.dept, e2.sal);
}
