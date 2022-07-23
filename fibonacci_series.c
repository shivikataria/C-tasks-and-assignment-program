 #include<stdio.h>
int main()
{
	int a=0, b=1,c,x ,num ;
	
	printf("Enter the number of element : ");
   scanf("%d",&num);
   
	printf("\n%d %d ",a,b);
	
	 	for(x=2;x<num;x++)
  {
  	
  	c=a+b;
	printf("%d ",c);
	 a=b;
	 b=c;
	 
  	
  	
   } 
	
	
	
}
