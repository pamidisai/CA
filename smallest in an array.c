#include<stdio.h>
int main()
{
	int a[100],n,i;
	printf("Enter no of items: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the a[%d] value: ",i+1);
		scanf("%d",&a[i]);
	}
	int smallest = a[0];
	for(i=0;i<n;i++)g
	{
		if(smallest>a[i])
		{
			smallest = a[i];
		}
	}
	printf("Smallest value in the aray is %d",smallest);
}
