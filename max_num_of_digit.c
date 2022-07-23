#include<stdio.h>

    
main()
{
	int n=2341968,max=0,rem=0;
	
	while(n!=0)
	{
		rem=n%10;
	if(	max<rem)
	 max=rem;
		n=n/10;
		
	
		
		
	}
	
	
	
		printf("%d",max);
		
}
