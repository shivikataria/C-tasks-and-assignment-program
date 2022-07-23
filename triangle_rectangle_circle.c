#include<stdio.h>
int main()
{
	int r;
	float A , h , b ,Area, w ,l,pie, Areaofc;
	char choice;
	
	printf("Enter the any case");
	scanf("%d",&choice);
	
	switch(choice)
        {
        	
        		case 1 : 	
	                 printf("Enter height of triangle : ");
					 scanf("%f",&h);
					 printf("Enter base of triangle : ");
					 scanf("%f",&b);
				   	 A = h * b / 2;
					 printf("Area of Triangle =%.2f",A);
	                 break;
	
	case 2 :
		       		
  					printf("Enter length of rectangle : ");
					scanf("%f",&w);
					printf("Enter width of rectangle : ");
					scanf("%f",&l);
					Area = w * l;
					printf("Area of Rectangle = %.f",Area);
		              break;
	case 3 :  
					 printf("Enter radius of circle : ");
   					 scanf("%d",&r);
 					 pie = 3.14;
				   	 Areaofc = pie*(r*r);
					 printf("Area of  Circle = %.2f",A);
	                break;
        }
	
	
	
	
}
