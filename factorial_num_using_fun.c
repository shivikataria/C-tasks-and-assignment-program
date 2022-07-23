#include<stdio.h>


int FactorofaNum()
{
	int number;
		
		{
			int i,v;
			number =v;
			cout<<number<<endl<<"Factors of entered number are: \n";//14
			
			for(i=1;i<=number/2;i++)//7
			{
				if(number%i==0)
				{
					cout<<i<<endl;//1 2 7
				}
			}
			
		}
		
	
};
int main()
{
	int n;
	printf<<"enter any number:";
	scanf>>n;
	FactorOfaNum(n);
	return 0;
	
	
	return 0;
}
