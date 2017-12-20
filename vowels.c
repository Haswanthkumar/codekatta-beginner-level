#include<stdio.h>
int main (void)
{
	int a;
	printf("1.vowel\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		{
			char c;
			printf("enter the charecter\n");
			scanf("%s",&c);
			if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
			{
				printf("the charecter is vowel%c\n",c);
			}
			else
			{
				printf("the charecter is not vowels%c\n",c);
			}
		break;
		}
		default:
		{
			printf("invalid\n");
			
		}
	}
	return 0;
}
