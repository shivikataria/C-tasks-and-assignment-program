#include<stdio.h>
int main()
{ 
	int arr[] = {67,87,89,65,768,930,2304,4329};
	
	int max=arr[0],second_max,x,min;
	
	for(x=0;x<8;x++)
	{
		if(arr[x]>max)
		{
			max=arr[x];
		}
	}
	
	printf("max = %d\n",max);
	
	second_max =arr[0];
	
	for(x=0;x<8;x++)
	{
		if(arr[x]>second_max && arr[x]!=max)
		{
			second_max=arr[x];
		}
	}	
	printf("Second max = %d\n",second_max);
	
    min = arr[0];		
	for(x=0;x<8;x++)
	{
		if(arr[x]<min)
		{ 
			min=arr[0];
		}
	}
		printf("min = %d ",max);
	
}
