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
		if(n%i==0) //����п��Գ�����������˵��n�г���1�ͱ������������������ 
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
