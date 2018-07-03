#include <stdio.h>
int main()
{
int firstNumber, secondNumber, sub;
printf("Enter an integers: ");
scanf("%d %d" , &firstNumber, &secondNumber);
sub = firstNumber - secondNumber;
printf("%d - %d =%d" , firstNumber, secondNumber, sub);
return 0;
}