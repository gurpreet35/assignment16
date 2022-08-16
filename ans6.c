// Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main(){
    int flag=0;
    int m,n;
    printf("Enter the value of Rows:");
    scanf("%d",&m);
    printf("Enter the value of Columns:");
    scanf("%d",&n);
    int a[m][n],sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
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
    printf("the sum of Rows of a matrix:\n");
    for (int i = 0; i < m; i++)
    {   
        for (int j = 0; j < n; j++)
        {
            if(i==0){
            flag=1;
            sum=sum+a[0][j];
            }
            if(i==1){
            flag=2;
            sum1=sum1+a[1][j];
            }
            if(i==2){
            flag=3;
            sum2=sum2+a[2][j];
            }
                    printf("\n");
    }
    if(flag==1)
        printf("Sum of %d row is %d",i+1,sum);
    if(flag==2)
        printf("Sum of %d row is %d",i+1,sum1); 
    if(flag==3)
        printf("Sum of %d row is %d",i+1,sum2); 
    }
        for (int j = 0; j < n; j++)
    {   
    for (int i = 0; i < m; i++)
        {
            if(j==0){
            flag=4;
            sum3=sum3+a[i][0];
            }
            if(j==1){
            flag=5;
            sum4=sum4+a[i][1];
            }
            if(j==2){
            flag=6;
            sum5=sum5+a[i][2];
            }
        printf("\n");
    }
    if(flag==4)
        printf("Sum of %d column is %d",j+1,sum3);
    if(flag==5)
        printf("Sum of %d column is %d",j+1,sum4); 
    if(flag==6)
        printf("Sum of %d column is %d",j+1,sum5);    
}
    return 0;
}