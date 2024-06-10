#include<stdio.h>
int main()
{
	int ch,qty;
	char cont;
	
	do
	{
	printf("------------ Menu -------------");
		printf("\n1Pizza RS:180\n");
		printf("\n2Burger RS:100\n");
		printf("\n3Dosa RS:120\n");
		printf("\n4Idli RS:130\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("\nyou selected Pizza");
				printf("\nenter you qty :");
				scanf("%d",&qty);
				printf("\nTotal amount : %d",(qty*180));
				break;
				
			case 2:
				printf("\nyou selected Burger");
				printf("\nenter you qty :");
				scanf("%d",&qty);
				printf("\nTotal amount : %d",(qty*100));
				break;
				
			case 3:
				printf("\nyou selected Dosa");
				printf("\nenter you qty :");
				scanf("%d",&qty);
				printf("\nTotal amount : %d",(qty*120));
				break;
				
			case 4:
				printf("\nyou selected Idli");
				printf("\nenter you qty :");
				scanf("%d",&qty);
				printf("\nTotal amount : %d",(qty*130));
				break;
			default:
				printf("\nYour choice is wrong");
		}	
		
		printf("Do you want to continue? (y/n):");
		scanf("%s",&cont);
	} while(cont == 'y' || cont == 'Y');
}	

