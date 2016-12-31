#include<stdio.h>
int main()
{
  int num,r,count=0,sum = 0;
  scanf("%d",&num);
  do 
  { 
    r=num % 10;
    sum=sum+r; 
    num=num/10;
    count++;
  } while (num > 0); 
    printf("The sum of digits is %d",sum);
    printf("The number of digits are %d",count);
}
