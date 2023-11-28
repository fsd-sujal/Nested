#include<stdio.h>

main(){
	float a,b,c;
	printf("Enter The Value Of A :");
	scanf("%f",&a);
	printf("Enter The Value Of B :");
	scanf("%f",&b);
	printf("Enter The Value Of C :");
	scanf("%f",&c);
	
	if(a<b)
	{
		if(a<c)
		{
			printf("A is small");
		}
		else
		{
			printf("C is small");
		}
	}
	else
	{
		if(b<c)
		{
			printf("B is small");
		}
		else
		{
			printf("C is small");
		}	
	}
}
