// . Write a program in C to find the sum of right diagonals of a matrix.
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
    printf("the sum of right diagonals of a matrix:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
          if(((m-1)%2==0)&&((n-1)%2==0))  {
        if((i==(m-1)/2)&&(j==(n-1)/2)){
            
            sum=sum+a[(m-1)/2][(n-1)/2];
            
        }
        if((i==(0))&&(j==(n-1))){
            
              sum=sum+a[0][n-1];
              
        }
         if((i==(m-1))&&(j==(0))){
              sum=sum+a[m-1][0];
            
        }
            }
            else{
                if((i==(0))&&(j==(n-1))){
            
              sum=sum+a[0][n-1];
              
        }
         if((i==(m-1))&&(j==(0))){
              sum=sum+a[m-1][0];
            
        }
            }
        printf("\n");
    }
}
    printf("%d",sum);
    return 0;
}