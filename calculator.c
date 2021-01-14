#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, flag;
        char g, ch;

    do{
        

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
    

    return 0;
}
