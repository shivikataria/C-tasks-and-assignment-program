#include<stdio.h>
#include<string.h>

int main()
{
		char str1[10]="Shiwani ",str2[10]=" Kataria";		
		
		
		int i,j=0;
		i=0;
		while(str1[i]!='\0')
		{
			++i;
		}
		
		while(str2[j]!='\0')
		{
				str1[i] = str2[j];
				j++;
				i++;
				
		}		
	
		printf("%s ",str1);
	
}
