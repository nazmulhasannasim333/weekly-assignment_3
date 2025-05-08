#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int space = n - 1;
    int hash = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= hash; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        space--;
        hash += 2;
    }
    space = 1;
    hash = 2 * n - 3;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= hash; j++)
        {
            if ((n - i) % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        space++;
        hash -= 2;
    }

    return 0;
}