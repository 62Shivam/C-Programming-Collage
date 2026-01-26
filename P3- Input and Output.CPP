#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int age;
	int nm[25];
	printf("Enter Your Name\t");
	scanf("%s",nm);
	printf("Enter Your Age\t");
	scanf("%d",&age);
	printf("\nYour Name is\t%s",nm);
	printf("\nYour Age is\t%d",age);
	getch();
}