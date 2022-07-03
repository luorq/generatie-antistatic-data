#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Hello, World!\n");
    printf("Please input the number of items you need:\n");
    int num;
    scanf("%d", &num);

    printf("Please input the level of number you want:\n1.low\n2.medium\n3.high\n");
    int level;
    scanf("%d", &level);

    srand((unsigned)time(NULL));
    int ave;

    if (level == 1)
    {
        printf("You choose low level numbers.\n");
        printf("\ta\tb\tc\tave\n");
        for (int i = 1; i <= num ; i++)
        {
            /*
            printf("Please input the average number you want:");
            int ave;
            scanf("%d", &ave);
             */
            ave = rand() % 400 + 100;

            int a = rand() % 200 + ave - 100;
            int b = rand() % 200 + ave - 100;
            int c = ave * 3 - a - b;

            printf("%d\t" ,i);
            printf("%d\t" ,a);
            printf("%d\t" ,b);
            printf("%d\t" ,c);
            printf("%d\n" ,ave);

            if(i % 5 == 0)
            {
                printf("\n");
            }
        }
    }
    else if(level == 2)
    {
        printf("You choose medium level numbers.\n");
        printf("\ta\tb\tc\tave\n");
        for (int i = 1; i <= num ; i++)
        {
            /*
            printf("Please input the average number you want:");
            int ave;
            scanf("%d", &ave);
             */
            ave = rand() % 400 + 300;

            int a = rand() % 200 + ave - 100;
            int b = rand() % 200 + ave - 100;
            int c = ave * 3 - a - b;

            printf("%d\t" ,i);
            printf("%d\t" ,a);
            printf("%d\t" ,b);
            printf("%d\t" ,c);
            printf("%d\n" ,ave);

            if(i % 5 == 0)
            {
                printf("\n");
            }
        }
    }
    else
    {
        printf("You choose high level numbers.\n");
        printf("\ta\tb\tc\tave\n");
        for (int i = 1; i <= num ; i++)
        {
            /*
            printf("Please input the average number you want:");
            int ave;
            scanf("%d", &ave);
             */
            ave = rand() % 400 + 500;

            int a = rand() % 200 + ave - 100;
            int b = rand() % 200 + ave - 100;
            int c = ave * 3 - a - b;

            printf("%d\t" ,i);
            printf("%d\t" ,a);
            printf("%d\t" ,b);
            printf("%d\t" ,c);
            printf("%d\n" ,ave);

            if(i % 5 == 0)
            {
                printf("\n");
            }
        }
    }

    getchar();
    getchar();
    return 0;
}
