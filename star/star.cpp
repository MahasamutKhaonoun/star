#include<stdio.h>
int star1(int num1);
int star2(int num2);
int main()
{
    int n,i,j,st = 0;
    scanf_s("%d", &n);

    if (n % 2 == 1)
    {

        for (i = 0; i < n / 2 + 1; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == (n / 2) + st || j == (n / 2) - st)
                {
                    printf("*");
                }
                else
                {
                    printf("-");
                }

            }
            printf("\n");
            st++;

        }
        st = star1(st);
        for (i = 0; i < n / 2; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == (n / 2) + st || j == (n / 2) - st)
                {
                    printf("*");
                }
                else
                {
                    printf("-");
                }

            }
            printf("\n");
            st--;

        }
    }
    else
    {
        for (i = 0; i < n / 2; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
                if (j == (n / 2) - 1 + st || j == (n / 2) - 1 - st)
                {
                    printf("*");
                }
                else
                {
                    printf("-");
                }

            }
            printf("\n");
            st++;

        }
        st = star2(st);
        for (i = 0; i < n / 2; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
                if (j == (n / 2) - 1 + st || j == (n / 2) - 1 - st)
                {
                    printf("*");
                }
                else
                {
                    printf("-");
                }

            }
            printf("\n");
            st--;

        }
    }
    return 0;
}
int star1(int num1)
{
    num1 -= 2;
    return num1;
}
int star2(int num2)
{
    num2 -= 1;
    return num2;
}