#include<stdio.h>
int main()
{
  int num,sum=0,r;
  printf("enter the num");
  while(num!=0)
  {
    r=num%10;
    rev=rev*10+r;
    num=num/10;
  }
  printf("the reverse of the num is %d",rev);
}
    
