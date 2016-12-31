#include<stdio.h>
int main()
{
	int a[10],n,i,count=0,key;
	printf("enter num of elements");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter num to be searched");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			count++;
		}
	}
	printf("the number %d occurs %d times",key,count);
}
