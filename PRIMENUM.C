#include<stdio.h>
#include<conio.h>
void main()
{

int i=1,j=1,n=0,flag=1,sum;
clrscr();

	printf("Enter the number");
	scanf("%d",&n);

	for (i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			for(j=2;j<=i/2;j++)
			{
				if(i%j == 0)
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
				printf("%d \n",i);
		}
	}
getch();
}
