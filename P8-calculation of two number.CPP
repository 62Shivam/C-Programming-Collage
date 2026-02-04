#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float x,y;
	int a,b;
	printf("Enter First Number");
	scanf("%f",&x);
	printf("Enter Second Number");
	scanf("%f",&y);
	printf("\nAddition is\t%f",x+y);
	printf("\nSubtraction is\t%f",x-y);
	printf("\nMultiplacation is\t%f",x*y);
	printf("\nDivision is\t%f",x/y);
	a=x;
	b=y;
	printf("\nModulus is\t%d",a%b);
	getch();
}
