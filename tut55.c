#include<stdio.h>
int main()
{
    int m,n,g,h,sum=0;
printf("enter no of rows in first matrix:");
scanf("%d",&n);
printf("enter no of column in first matrix:");
scanf("%d",&m);
int mat[n][m];
printf("enter no of rows in second matrix:");
scanf("%d",&g);
printf("enter no of column in second matrix:");
scanf("%d",&h);
int matr[g][h];
int res[n][h];
if (m==g)
{
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter the element at %d %d position of first matrix:",i,j);
            scanf("%d",&mat[i][j]);
        }
        
    }
    
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter the element at %d %d position of second matrix:",i,j);
            scanf("%d",&matr[i][j]);
        }
        
    }
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < h; j++)
        {
            for (int k = 0; k <h; k++)
            {
                sum+=mat[i][k]*matr[k][j];
            }
            res[i][j]=sum;
            sum=0;
        }
        
    }
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < h; j++)
        {
            printf(" the element at %d %d position of resultant matrix is %d\n",i,j,res[i][j]);
            
        }
        
    }
    
    
}




    return 0;
}