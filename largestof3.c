#include <stdio.h>

int main(void)
{
	int a1,b1,c1;
	printf("enter three number\n");
	scanf("%d%d%d",&a1,&b1,&c1);
	if((a1>b1)&&(a1>c1))
	{
		printf("%d is greater",a1);
	}
	else if((b1>a1)&&(b1>c1))
	{
		printf("%d is greater",b1);
	}
	else if((c1>b1)&&(c1>a1))
	{
		printf("%d is greater",c1);
	}
	else
	{
		printf("all re equal");
	}
	return 0;
}
