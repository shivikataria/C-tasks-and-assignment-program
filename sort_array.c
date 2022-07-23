#include<stdio.h>
int main()
{
	int arr[15]={2,4,57,7,8,19,67,6,657,789,34,1234,87};
	int i,j,temp;	

	
	for(i=0;i<13;i++)
	{
		
		for(j=i+1;j<13;j++)
		{
			if(arr[i]>arr[j])
           {     
		        temp = arr[i];
		     	arr[i] = arr[j]; 
			    arr[j] = temp;
				
			}
			
	    }
    		printf("%d ",arr[i]); 
	}
	//	for(i=0;i<8;i++)
	 //	{
	//		
	//		printf("%d ",arr[i]); 	
	//	}
	
		
}

