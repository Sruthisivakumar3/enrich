#include<stdio.h>
int main()
{
     int num,r,count=0,sum = 0;
     for(i=0;num>=0;i++)
     {
         r=num % 10;
         sum=sum+r; 
         num=num/10;
         count++;
         a[i]=r;
     } 
    for(i=0;i<count;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            printf("The sum of digits is %d",a[i]);
         }
     }
}
