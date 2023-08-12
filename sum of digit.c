#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,sum=0;
	printf("enter the value:");
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	printf("sum is :%d",sum);
	return 0;
}
