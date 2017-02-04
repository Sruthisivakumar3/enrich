#include <stdio.h>

int main() {
	// your code goes here
	int a[5],i,b[5],j,num,ch;
	for(i=0;i<5;i++)
	{
	    scanf("%d",&a[i]);
	}
	scanf("%d",&num);
	scanf("%d",&ch);
    switch(ch)
    {
        case 1:
                for(i=5;i>=0;i--)
                {
                    if(num<=i)
            	    {
            	        	
            	        a[i]=a[i-num];
            	    }  
	                else
	                {
	                   a[i]=0;
	                }
	            }
	            for(i=0;i<5;i++)
	            {
	                printf("%d\t",a[i]);
	            }
	            break;
	    case -1:
	            for(i=0;i<5;i++)
	            {
	                if((i+num)<5)
	                {
	        	        a[i]=a[i+num];
	                }  
	                else
	                {
	                    a[i]=0;
	                 }
	            }
	            for(i=0;i<5;i++)
	           {
	                printf("%d\t",a[i]);
	            }
	          break;  
	     default:printf("invalid statement");     
        }
}
