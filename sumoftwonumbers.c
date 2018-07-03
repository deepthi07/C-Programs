#include <stdio.h>
int main()
{
	int firstNumber,secondNumber,sumofTwoNumbers;
	printf("Enter an integers: ");
	scanf("%d %d", &firstNumber, &secondNumber);
	sumofTwoNumbers = firstNumber + secondNumber;
	printf("%d + %d = %d" , firstNumber, secondNumber, sumofTwoNumbers);
	return 0;
	}