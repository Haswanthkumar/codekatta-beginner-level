#include<stdio.h>
int main (void)
{
    char a;
    printf("enter the charecter\n");
    scanf("%s",&a);
    if((a>=65)&&(a<=90))
    {
        printf("enter one is alphabet\n");
    }
    else if((a>=97)&&(a<=122))
    {
        printf("enter one is alphabet\n");
    }
    else
    {
        printf("it is not alphabet\n");
    }
}
