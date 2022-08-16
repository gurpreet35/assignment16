// Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of Rows & Columns:");
    scanf("%d", &n);
    int a[n][n],count=0,flag=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("A matrix is -->:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {   
            if(a[i][j]==0){
                count++;
            }
                printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if(count>((n*n)/2)){
            flag=1;
           }
        }
            printf("\n");
    }
    printf("The number of zeros in the matrix are %d\n",count);
    printf("The A matrix is :\n");
        if(flag==1){
            printf("Sparse Matrix");
        }
        else
            printf(" not a Sparse Matrix");
    return 0;
}