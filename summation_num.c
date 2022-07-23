#include<stdio.h>
int main()
{
	int num = 9847, rem ,res = 0;
	
	while (num!=0)
	
	{
		rem = num %10 ;
		
		res = res + rem ;
		 
		num = num/10;
		
		
		
	}
	
	
	printf("%d",res);
	
	
	
	
}
