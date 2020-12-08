#include<stdio.h>
int main()
{
	int x,a,b,c;
	scanf("%d,%d,%d,%d",&x,&a,&b,&c);
	int y=x*x*x+2*x*x+3*x+1;
	printf("%d\n",y);
	printf("sqrt(%d)!=(4*(%d))/((%d)*(%d))",x,a,b,c);
	
	return 0;
}

