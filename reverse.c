#include<stdio.h>
int main()
{
	int num = 5768, rem ,res = 0;
	
	while (num!=0)
	
	{
		rem = num %10 ;
		
		res = res * 10 + rem ;
		 
		num = num/10;
		
		
		
	}
	
	
	printf("%d",res);
	
	
	
	
}
