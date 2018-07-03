#include <stdio.h>
int main()
{
float firstNumber, secondNumber, product;
printf("Enter two numbers:");
scanf("%f %f" , &firstNumber , &secondNumber);
product = firstNumber * secondNumber;
printf("product = %f", product);
return 0;
}
