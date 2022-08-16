// Write a program in C to print or display the lower triangular of a given matrix.
#include <stdio.h>
int main()
{
    int n;

    printf("Enter the value of Rows & Columns:");
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The A matrix is :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {   
                printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    printf("The lower triangular of a A matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i<j))
            {
                printf(" %d",0);
            }
            else
                printf(" %d", a[i][j]);
        }
            printf("\n");
    }
    return 0;
}