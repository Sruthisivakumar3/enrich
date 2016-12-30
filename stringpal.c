#include<stdio.h>
int main()
{
  int i,start,stop,length,temp=0;
  char name[10];
  printf("enter the string");
  scanf("%s",name);
  for(length=0;name[i]!=0;length++)
  {
    for(start=0,stop=length-1;start<i,stop>i;start++,stop--)
    {
      if(name[start]==name[stop])
      {
        temp=1;
         break;
      }
    }
}
if(temp==0)
  {
    printf("not a palindrome");
  }
  else
  {
    printf("palindrome");
  }
}
