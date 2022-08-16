// Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the value of Rows:");
    scanf("%d",&m);
    printf("Enter the value of Columns:");
    scanf("%d",&n);
    int a[m][n],sum=0;
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        } 
    }
    printf("The A matrix is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    printf("the sum of diagonals of a matrix:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
         
        if(i==j){  
            sum=sum+a[i][j]; 
        } 
      
        printf("\n");
    }
}
    printf("%d",sum);
    return 0;
}