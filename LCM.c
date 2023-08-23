#include<stdio.h>
int main()
{
	int a,b,lcm=0,i=2;
	printf("Enter num 1: ");
	scanf("%d",&a);
	printf("Enter num 2: ");
	scanf("%d",&b);
	int flag = 0;
	while(flag=0)
	{
		if((a%i==0)&(b%i==0))
		{
			flag = 1;
			lcm  = i;
		}
		i++;
	}
	printf("The LCM of %d and %d is:  %d",a,b,lcm);
	return 0;
}
