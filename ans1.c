// Write a program to calculate the sum of two matrices each of order 3x3
#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3];
    printf("Enter the element:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("The A matrix is :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("The B matrix is :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    printf("Sum of Matrix A and B is:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}