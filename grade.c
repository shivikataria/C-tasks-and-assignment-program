#include<stdio.h>
int main()
{
	int phy,chem,math ;
    
	float percentage,total;
		
	printf("Enter marks of Physics :");
	scanf("%d",&phy);
	
	printf("Enter marks of Chemistry :");
	scanf("%d",&chem);
	
	printf("Enter marks of Math :");
	scanf("%d",&math);
	
	total = phy+chem+math;
	printf("Total Marks = %.f\n",total);
	percentage = total/3;
	
	printf("Precentage = %.2f\n",percentage);
	
	if(percentage>=90)
	 {
	 	printf("First Class");
	 }
	
	else if(percentage>=75)
	 {
	 	printf("Second Class");
	 }
	
	else if(percentage>=60)
	 {
	 	printf("Third Class");
	 }

	else if(percentage>=35)
	 {
	 	printf("Pass........");
	 }
		
	else 
	 {
	 	printf("Fail........");
	 }
		
	
	
}
