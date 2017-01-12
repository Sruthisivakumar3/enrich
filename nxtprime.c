#include <stdio.h>
int main() 
{ 
    int num,n,i; 
    scanf("%d",&num); 
    for(n=num+1;n<num+100;n++)  
    {    
        int flag=0;    
        for(i=2;i<n;i++)     
        {        
            if(n%i==0)        
            {             
                flag=1;            
                break;         
            }          
        }    
        if(flag==0)    
        {        
            printf(" %d",n);        
            break;     
        }   
    }
}
