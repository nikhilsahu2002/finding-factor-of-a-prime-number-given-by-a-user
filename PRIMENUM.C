#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,flag=0,j,num;
clrscr();
printf("Enter the Number");
scanf("%d",&n);

	if(n==0 || n==1)
		flag =1;
	while(j<=num)
	{
		for(i=2;i<=n/2;i++)
			if (n%i == 0)
			{
				flag = 1;
				break;
			}
			if (flag == 0)
			printf(" prime number");
			else
			printf("not a prime nuber");
	 }

getch();
}