#include<stdio.h>
#include<string.h>
int main()
{
	int j,acount=0,ecount=0,icount=0,ocount=0,ucount=0;
	char name[100];
	scanf("%s",name);
	int length=strlen(name);	
	
		for(j=0;j<length;j++)
		{
			if((name[j]=='a')||(name[j]=='A'))
			{
				acount++;
			}
			if((name[j]=='e')||(name[j]=='E'))
			{
				ecount++;
			}
			if((name[j]=='i')||(name[j]=='I'))
			{
				icount++;
			}
			if((name[j]=='o')||(name[j]=='O'))
			{
				ocount++;
			}
			if((name[j]=='u')||(name[j]=='U'))
			{
				ucount++;
			}
		}
		printf("%d%d%d%d%d",acount,ecount,icount,ocount,ucount);
}
