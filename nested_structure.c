//nested structure
#include <stdio.h>
#include <conio.h>
void main()
{
    struct data_of_join
    {
        int day;
        int month;
        int year;
    };
    struct emp
    {
        int eno;
        char *name;
        char *dept;
        float sal;
        struct date_of_join;
    };
    struct emp e1;
    printf("\n Enter Employee no. = ");
    scanf("%d", &e1.eno);
    printf("\n Enter Employee Name = ");
    gets(e1.name);
    printf("\n Enter Employee Department = ");
    gets(e1.dept);
    printf("\n Enter Employee Salary = ");
    scanf("%d", &e1.sal);
    printf("\n Enter the date of joining = ");
    scanf("%d", &e1.date_of_join.day);
    printf("\n Enter the month of joining = ");
    scanf("%d", &e1.date_of_join.month);
    printf("\n Enter the year of joining = ");
    scanf("%d", &e1.date_of_join.year);
    printf("\n Employee Id = %d \n Employee Name  = %s \n Employee Department = %s /n Employee Salary = %d \n Employee Joining date = %d/%d/%d",e1.eno,e1.name,e1.dept,e1.sal,e1.date_of_join.day,e1.date_of_join.month,e1.date_of_join.year);
}
