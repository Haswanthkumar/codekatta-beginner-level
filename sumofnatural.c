#include <stdio.h>

int main(void)
{
    int n,i;
    printf("enter the limit\n");
    scanf("%d",&n);
    int sum=0;
    for(i=1;i<=n;i++)
    {

        sum=sum+i;
    }
    printf("the add velue is%d",sum);
	return 0;
}
