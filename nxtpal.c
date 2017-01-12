#include<stdio.h>  
int main() 
{    
    int num,i,flag=1,temp; 
    scanf("%d",&num);  
    for(i=num+1;1;i++)  
    {         
        temp=i;        
        int rev=0,r;      
        while(temp!=0)       
        {            
            r=temp%10;            
            rev=rev*10+r;           
            temp=temp/10;                   
        }        
        if(i==rev)
        {            
            flag=0;          
            break;       
        }                                
    }   
    printf("%d",i);
} 
