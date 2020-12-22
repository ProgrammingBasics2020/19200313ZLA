#include <stdio.h>
#include <math.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int i;
	int flag = 0;
	for(i=3;i<=sqrt(n);i++)
	{
		if(n%i==0) //如果有可以除尽的数，就说明n有除了1和本身的数，不是素数。 
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		printf("%d ",n);
		printf("is a primer!");
	}
	else
	{
		printf("%d ",n);
		printf("is not a primer!");
	}
	return 0;
}
