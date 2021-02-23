/* when we define in c language a storage class is associated with that vaiable automaticaly. a storage class define 
 1) life spam of the variable 
 2) avaliblity of the variable (avalibility)
 the life spam of the variable specifies the duration for which the variable will return the value . this is indirectly accociated with the place of declaration and type of variable . for example :- if a variable is declared with in a function , it will exist as long as the function is exicuted but if we have declared a global variabel it will retain the value for the entire programm execution period 
 scope of variable 
 it indicates the parts of the programm , where the variable is useable for example a variable can be available 
 ---------------i skiped---------------------
type of storage class avaliable in c 
storage classes in c languages specifies where the variable is to be stored that is eithe in the memory or in the register . sorage classes have 4 chatogry 
1) automatic 
2) external 
3) static 
4) register

 */
#include<stdio.h>
#include<conio.h>
// this is the global variable it can be accessed by whole programm during the exuction period.
int p=10;
void main()
{
    // num1,num2 is the local variabe it is not be declared in othe function
    int num1,num2;
    printf("\n Enter the first number - ");
    scanf("%d",&num1);
    printf("\n Enter the second number - ");
    scanf("%d",&num2);
    // this code is run because 'p' is global variable
    printf("\n this is the global variable(in main function) %d",p);
    sum(num1,num2);
    getch();

}
sum(int n1,int n2)
{
    // n3 is the local variable it is not be declare in the main function.
    int n3=n1+n2;
    printf("\n this is the sum of your given number = %d ",n3);
    // this code is run because 'p' is global variable
    printf("\n this is the global variable(in function) %d",p);
}