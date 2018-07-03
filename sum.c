#include <stdio.h>
int main()
{
	int firstNumber, secondNumber, divisionoftwonumbers;
	printf("Enter a firstnumber:");
	scanf("%d" , &firstNumber);
	printf("Enter a secondnumber:");
	scanf("%d" , &secondNumber);
	divisionoftwonumbers = firstNumber / secondNumber;
	printf("divisionoftwonumbers: %d\n", divisionoftwonumbers);
	return 0;
}