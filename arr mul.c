#include<stdio.h>

int main()
{
	int a[3][2],b[3][2],c[3][2],n,p;
	for(n=0;n<3;n++)
	{
		for(p=0;p<2;p++)
		{
			printf("enter the element:");
			scanf("%d",&a[n][p]);
		}
	}
	for(n=0;n<3;n++)
	{
		for(p=0;p<2;p++)
		{
			printf("enter the element:");
			printf("%d",&b[n][p]);
		}	
	}
	printf("\n first\n");
	for(n=0;n<3;n++)
	{
		for(p=0;p<2;p++)
		{
			printf("%d\t",a[n][p]);
		}
		printf("\n");
	}
	printf("\n second\n");
	for(n=0;n<3;n++)
	{
		for(p=0;p<2;p++)
		{
			printf("%d\t",a[n][p]);
		}
		printf("\n");
	}
	for(n=0;n<3;n++)
	{
		for(p=0;p<2;p++)
		{
			c[n][p]=a[n][p]*b[n][p];
		}
	}
	printf("\n multiplication of two matrix is\n");
	for(n=0;n<3;n++)
	{
		for(p=0;p<2;p++)
		{
			printf("%d\t",c[n][p]);
		}
		printf("\n");
	}
	
	return 0;
}
