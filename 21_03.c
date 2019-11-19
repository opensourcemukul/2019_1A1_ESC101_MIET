#include <stdio.h>
int main()
{
	char letter;
	printf("Enter a character:\n");
	scanf("%c", &letter);
	if (letter>=65 && letter <= 90)
	{
		letter = letter + 32;
	}
	// printf("letter is %c\n", letter);
	else if (letter>=97 && letter <= 122)
	{
		letter = letter - 32;
	}
	printf("letter is %c\n", letter);
	return 0;
}