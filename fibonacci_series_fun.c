#include<stdio.h>
int fibonacci(int a)
{
	int n1=0,n2=1,n3,i;
	
	printf("%d %d ",n1,n2);
	
	for(i=2;i<a;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		
		printf("%d ",n3);
		
	}
}
int main()
{
	int x;
	printf("Enter the num: ");
	scanf("%d",&x);
	fibonacci(x);
	return 0;
	
	
}




