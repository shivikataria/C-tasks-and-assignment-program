#include<stdio.h>
int main()
{
	int a,b ,c=0;
	printf("Enter any number : \na =  ");
	scanf("%d",&a);
	
	 for (b=1;b<=a;b++)
	 {
	 	if(a%b == 0)
	 	c++;
	 }
  	
	if( c==2)
	{
	  printf("A is a Prime number");
    }
  else {
         printf("A is not a Prime number");
       }
  
}
