#include <stdio.h>
int main()
{
	int Firstnumber, Secondnumber, Result;
	int ch;
	printf("Options:\n");
	printf("1:Add\n2:Subtraction\n");
	scanf("%d" ,&ch);
	printf("Enter Firstnumber:");
	scanf("%d", &Firstnumber);
	printf("Enter Secondnumber:");
	scanf("%d", &Secondnumber);
	if(ch==1)
	{
		Result=Firstnumber+Secondnumber;
	}
	else
	{
		Result=Firstnumber-Secondnumber;
	}
	printf("The Result is :%d\n",Result);
	return 0;

}


