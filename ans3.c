//  Write a program in C to find the transpose of a given matrix
#include<stdio.h>
int main(){
    int a[3][3],b[3][3];
      printf("Enter the element:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        } 
    }
    printf("The A matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of Matrix A is:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
          b[i][j]=a[j][i];
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}