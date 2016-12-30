#include<stdio.h>
int main()
{
    int a[10][10],i,j;
    printf("enter the num of rows and columns");
    scanf("%d%d,&m&n);
    printf("enter the value");
    scanf("%d",&k);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j+i==k)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=0;
            }
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
