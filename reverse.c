#include<stdio.h>
int main()
{
  int num,rev=0,r;
  printf("enter the num");
  scanf("%d",&num);
  temp=num;
  while(temp!=0)
  {
    r=temp%10;
    rev=rev*10+r;
    temp=temp/10;
  }
  if(num==rev)
  {
    printf(" the num is palindrome");
  }
  else
  { 
    printf("the number is not a palindrome);
  }
}
    
