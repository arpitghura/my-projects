#include <stdio.h>

int main()
{
    int a , c ;
    c = 1 ;
    printf("Enter Value whose factorial to be calculated \n");
    scanf("%d" , &a);
    if (a>0)
    {
        for (int i = 1; i <= a; i++)
            {
                c = c*i ;
            }
            printf("The Factorial Is : %d\n" , c);
    }
    else
    {
        printf("Enter Positive Value");
    }
    

    return 0;
}

