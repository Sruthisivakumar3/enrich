#include<string.h>
#include<stdio.h>
main()
{
    char str[100],result[100]={0};
    printf("Enter any string");
    scanf("%s",str);                        
    int len,i,j,count,k=0;
    len=strlen(str);
    for(i=0;i<len;i++)
	{
        count=0;
        for(j=0;j<i;j++)
		{
            if(str[i]==str[j])
			{   
                count++;
            }
        }
        if(count==0)
		{
            result[k++]=str[i];
        }
    }
    printf("Output string with only unique characters:");
    printf("%s",result);
   
}
