#include<stdio.h>
int main()
{
	int sub;
	printf("enter in which sub you get passing marks\n");
	printf("select a for phy\n");
	printf("select b for maths\n");
	printf("select c for both phy and maths\n");
	printf("select your sub in which you have pass\n"); 
	scanf("%c",&sub);
	
	if(sub=='a')
	{
		printf("then you are eligible for 25 rupees as a gift");
	}
	
	else if(sub=='b')
	{
		printf("then you are eligible for 25 rupees as a gift");
	}
	
	else if(sub=='c')	
	{
		printf("then you are eligible for 50 rupees as a gift");
	}
	else
	{
		printf(" if not you are not eligible for gift");
	}
	return 0;
}
