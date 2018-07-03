#include <stdio.h>
int main()
{
	int x, y, Result;
	int ch;
	printf("options:\n1.multipilication:\n2.division\n");
	scanf("%d", &ch);
	printf("Enter x=");
	scanf("%d", &x);
	printf("Enter y=");
	scanf("%d", &y);
	if(ch==1)
	{
	Result=x*y;
	}
	else
	Result=x/y;
	printf("The Result is:%d\n" ,Result);
	return 0;



}