#include <stdio.h>
#include <conio.h>
int main()
{
    int a/*this is for first number*/, b/*this is for the second number*/, flag/*this is for the loop */;
        char g/*this is for the what user want the like sum ,sub etc.*/, ch/*this is for the yes or no in the loop*/;

    do{/*this is the loop for restart again and again */
        

        printf("\nWelcome to my C Language Programme \n");

        printf("this is the calculation Program \n");
        printf(" \n enter (a-add,s-sub,m-mult,d-div)\n");
        scanf("%s", &g);
        if (g == 'a')
        {
            printf("Enter number 1\n");
            scanf("%d", &a);

            printf("Enter number 2\n");
            scanf("%d", &b);
            int c = a + b;
            printf("addition is = %d ", c);
        }
        else if (g == 's')
        {
            printf("Enter number 1\n");
            scanf("%d", &a);

            printf("Enter number 2\n");
            scanf("%d", &b);
            int c = a - b;
            printf("addition is = %d ", c);
        }
        else if (g == 'm')
        {
            printf("Enter number 1\n");
            scanf("%d", &a);

            printf("Enter number 2\n");
            scanf("%d", &b);
            int c = a * b;
            printf("addition is = %d ", c);
        }
        else if (g == 'd')
        {
            printf("Enter number 1\n");
            scanf("%d", &a);

            printf("Enter number 2\n");
            scanf("%d", &b);
            int c = a / b;
            printf("addition is = %d ", c);
        }

        else
        {
            printf("Wrong Valure");
        }
        /*this is for the restart or exit the programm */
        printf(" \nEnter 'q' quit or 'y' for continue \n");
        scanf("%s", &ch);
        if (ch == 'q')
        {
            flag = 1;
        }
        else if (ch == 'y')
        {
            flag = 0;
        }
        else
        {
            flag=1;
        }
        

    } while (flag == 0);
    

    return 0;/*return  0 is used for the return the value 0 in the code when you are using the int main() */
}
