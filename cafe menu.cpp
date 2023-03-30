#include<stdio.h>

int main()
{
	
	int c1=160,c2=100,c3=190,c4=80;
	int ch;
	int a;
	

	
	printf("\n                             welcome to foods corner       \n\n");
	printf("                                  select your menu              \n");
	
	
	
	

	printf("please place your order\n");
	printf(" =====================================================================\n\n");
	printf("1. pizza       price=160.00 rs/pcs\n");
	printf("2. burger      price=100.00 rs/pcs\n");
	printf("3. dosa        price=190.00 rs/pcs\n");
	printf("4. idli        price=80.00 rs/pcs\n");
	
	
	
	
	
	
	printf("=========================================================================\n");
	printf("enter your choice.:-");
	scanf("%d",&ch);
	
	switch (ch)
	{
		case 1:
		printf("you select pizza\n");	
		printf("how much pizza you want?");
		scanf("%d",&a);
		printf("total ammount : %d",a*c1);
		break;
			
		case 2:
		printf("you select burger\n");	
		printf("how much burger you want?");
		scanf("%d",&a);
		printf("total ammount : %d",a*c2);
		break;	
		
		case 3:
		printf("you select dosa\n");	
		printf("how much dosa you want?");
		scanf("%d",&a);
		printf("total ammount : %d",a*c3);
		break;	
		
		case 4:
		printf("you select idli\n");	
		printf("how much idli you want?");
		scanf("%d",&a);
		printf("total ammount : %d",a*c4);
		break;
		
		default:
		printf("the dish you want is not available\n");
		break;
    }
	
	return 0;

 }  
    
    
	

        
			
	 



