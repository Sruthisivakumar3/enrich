#include<stdio.h>
int main()
{
  int num,rev,r;
  printf("enter the num");
  scanf("%d",%num);
  while(num!=0)
  {
    r=num%10;
    rev=rev*10+r;
    num=num/10;
  }
  printf("the reverse of the num is %d",rev);
}
    
