#include<stdio.h>
int main (void)
{
int num,pow,i,val=0;
printf("enter the number");
scanf("%d",&num);
printf("enter the power");
scanf("%d",&pow);
val=num;
if(pow>0)
{

    for(i=1;i<=pow-1;i++)
    {
        val=val*num;
    }
    printf("the value is %d",val);



    if(pow==1)
    {
        printf("the value is %d",num);
    }
    else if(pow==0)
    {
        num=0;
        printf("the value is %d",num);
    }
    else
    {
    printf("\n");
    }
}
else
{
    printf("please enter postive power\n");
}
return 0;
}


