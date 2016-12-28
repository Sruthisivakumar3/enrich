#include<stdio.h>
int main()
{
  int num,r,i,m,x;
  printf("enter a number");
  scanf("%d",&num);
  printf("enter times to shift");
  scanf("%d",&m);
  for(i=0;i<m;i++)
  {
    r=num%10;
    x=num/10;
    if(r!=0)
    {
      num=(10000*rem)+x;
    }
    else
    num=x;
  }
  printf("%d",num);
}
    
   
      
