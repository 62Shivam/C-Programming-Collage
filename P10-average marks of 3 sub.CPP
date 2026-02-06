#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int m1,m2,m3;
	char nm[25];
	printf("\n\tEnter Your Name\t");
	gets(nm);
	printf("\n\tEnter 1st subject marks\t");
	scanf("%d",&m1);
	printf("\n\tEnter 2nd subject marks\t");
	scanf("%d",&m2);
	printf("\n\tEnter 3rd subject marks\t");
	scanf("%d",&m3);
	printf("\n\n\tYour Name is\t%s",nm);
	printf("\n\tTotal marks is\t%d",m1+m2+m3);
	printf("\n\tAverage marks is\t%d",(m1+m2+m3)/3);
	getch();
}