#include<stdio.h>
int main()
{
	int a=546,*b,**q;
	b=&a;
	
	q=&b;
	
	
	printf("address of a : %d\n",b);
	printf("Value of 6684180 is  :%d\n",*b);
		
	printf("address of p : %d\n",q);
	printf("address of a : %d\n",*q);
	
	printf("value : %d\n",**q);
	
	
}
