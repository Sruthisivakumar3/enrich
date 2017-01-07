// your code goes here
	int num,q,r;
	scanf("%d",&num);
	r=num;
	while(r<16)
	{
	    q=num/16;
	    r=num%10;
	    
	}
	printf("%d",q);
	printf("%x",r);
	return 0;
  }
