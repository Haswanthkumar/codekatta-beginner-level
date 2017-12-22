#include<Stdio.h>
int main(void)
{
    int s,e,i;
    printf("enter the starting number\n");
    scanf("%d",&s);
    printf("enter the ending number\n");
    scanf("%d",&e);
    s=s+1;
    for(i=s;i<=e;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
return 0;
}
