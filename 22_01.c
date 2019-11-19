#include <stdio.h>
int main()
{
	float max = 0;
	float n;
	int i = 0;
	while(i<n)
	{
		printf("Enter the number:\n");
		scanf("%f", &number);
		if (i == 0)
		{
			max = number
		}
		else
		{
			if (max <= number)
			{
				max = number;
			}
		}
		i++;
	}
	printf("Enter the second number:\n");
	scanf("%f", &second);
	if (max <= second)
	{
		max = second;
	}
	printf("Enter the third number:\n");
	scanf("%f", &third);
	if (max <= third)
	{
		max = third;
	}
	printf("The maximum is: %f\n", max);
	return 0;
}