#include<stdio.h>
int main()
{
	int arr[100][100];
	int row,col;
	
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			scanf("%d",&arr[row][col]);
		}
	}
	
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",arr[row][col]);
		}
		
		printf("\n");
	}

   
  

}

