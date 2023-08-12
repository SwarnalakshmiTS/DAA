#include<stdio.h>
#include<conio.h>
int main()
{
	int n,revnum=0,dig;
	printf("enter the number: ");
	scanf("%d",&n);
	int num=n;
	while(num!=0)
	{
		dig=num%10;
		revnum=revnum*10+dig;
		num/=10;
	}
	printf("the reversed number is : %d",revnum);
	return 0;
}
