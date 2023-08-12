#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],n,k,found=0;
	printf("enter the no of elements: ");
	scanf("%d",&n);
	printf("enter the elements: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched: ");
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	{
		if(k==a[i])
		{
			found=1;
			printf("element present in %d index",i);
			break;
		}
	}
	if(!found)
	{
		printf("element not found");
	}
	return 0;
}
