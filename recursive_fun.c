#include<stdio.h>

int sum(int x)
{
	if(x>0)//0>0
	{
		return x+sum(x-1);//10
	}

}
int main()
{
	
	printf("%d ",sum(5));
}
