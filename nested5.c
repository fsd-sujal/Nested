#include<stdio.h>

main(){
	float a,b,c,d,e;
	printf("Enter The Value Of A :");
	scanf("%f",&a);
	printf("Enter The Value Of B :");
	scanf("%f",&b);
	printf("Enter The Value Of C :");
	scanf("%f",&c);
	printf("Enter The Value Of D :");
	scanf("%f",&d);
	printf("Enter The Value Of E :");
	scanf("%f",&e);
	
	
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				if(a<e)
				{
					printf("A is small");
				}
				else
				{
					printf("E is small");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is small");
				}
				else
				{
					printf("E is small");
				}	
			}	
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("C is small");
				}
				else{
					printf("E is small");	
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is small");
				}
				else{
					printf("E is small");	
				}
			}	
		}	
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				if(b<e)
				{
					printf("B is small");
				}
				else
				{
					printf("E is small");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is small");
				}
				else
				{
					printf("E is small");
				}	
			}	
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("C is small");
				}
				else{
					printf("E is small");	
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is small");
				}
				else{
					printf("E is small");	
				}
			}	
		}	
	}	
}
