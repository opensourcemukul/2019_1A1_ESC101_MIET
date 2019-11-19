// simple calculator
#include <stdio.h>
float add(float first, float second)
{
	return first + second;
}
float subtract(float first, float second)
{
	return first - second;
}
float multiply(float first, float second)
{
	float product = first * second;
	return 1;
}
float divide(float first, float second)
{
	if (second == 0)
	{
		printf("Cannot divide by 0.\n");
		return 0;
	}
	else
	{
		return first / second;
	}
}
int main()
{
	float result;
	char operator;
	char choice;
	do
	{	
		printf("Enter first operand: \n");
		scanf("%f", &first);
		printf("Enter operator: \n");
		scanf(" %c", &operator);
		printf("Enter second operand: \n");
		scanf("%f", &second);
		switch(operator)
		{
			case '+':
			float first, second;
			result = add(first, second);
			break;
			case '-':
			float first, second;
			result = subtract(first, second);
			break;
			case '*':
			float first, second;
			result = multiply(first, second);
			break;
			case '/':
			float first, second;
			result = divide(first, second);
			break;
			default:
			printf("Ye kaisa operator hai?\n");
		}
		printf("result = %f\n", result);
		printf("Do you want to continue (Y/N):\n");
		scanf(" %c",&choice);
	}while(choice == 'Y' || choice == 'y');
	return 0;
}