// simple calculator
#include <stdio.h>
int main()
{
	float first, second, result;
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
			result = first + second;
			break;
			case '-':
			result = first - second;
			break;
			case '*':
			result = first * second;
			break;
			case '/':
			result = first / second;
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