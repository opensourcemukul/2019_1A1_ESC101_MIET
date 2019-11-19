#include <stdio.h>
#define pi 3.14

float areaSquare(float side)
{
	return side*side;
}

float areaRectangle(float length, float width)
{
	return length*width;
}

float areaCircle(float radius)
{
	return pi*radius*radius;
}

int main()
{
	float area;
	float radius, side, length, width;
	int choice;
	char repeat;

	do
	{
		printf("Enter 1 for circle, 2 for square and 3 for rectangle:\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("Enter radius:\n");
				scanf("%f", &radius);
				area = areaCircle(radius);
				printf("area of circle = %f",area);
				break;
			case 2:
				printf("Enter side:\n");
				scanf("%f", &side);
				area = areaSquare(side);
				printf("area of square = %f",area);
				break;
			case 3:
				printf("Enter length:\n");
				scanf("%f", &length);
				printf("Enter width:\n");
				scanf("%f", &width);
				area = areaRectangle(length, width);
				printf("area of rectangle = %f",area);
				break;
			default:
				printf("invalid choice\n");
				break;

		}
		printf("Do you want to continue (Y/N):\n");
		scanf(" %c",&repeat);
	}while(repeat == 'Y' || repeat == 'y');
	return 0;
}