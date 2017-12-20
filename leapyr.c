#include <stdio.h>

int main(void)
{
	int d,m,y;
	printf("enter your born dd mm yyyy\n");
	scanf("%d%d%d",&d,&m,&y);
	if(y%4==0)
    {
        printf("you are born in leap year %d\n",y);
    }
    else
    {
        printf("you are not born in leap year %d\n",y);
    }
	return 0;
}
