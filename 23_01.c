// check if a character is vovel or consonant
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char letter;
	printf("Enter a character:\n");
	scanf("%c", &letter);
	switch(letter)
	{
		case 'a':
		printf("vowel\n");
		break;
		case 'e':
		printf("vowel\n");
		break;
		case 'i':
		printf("vowel\n");
		break;
		case 'o':
		printf("vowel\n");
		break;
		case 'u':
		printf("vowel\n");
		break;
		case 'A':
		printf("vowel\n");
		break;
		case 'E':
		printf("vowel\n");
		break;
		case 'I':
		printf("vowel\n");
		break;
		case 'O':
		printf("vowel\n");
		break;
		case 'U':
		printf("vowel\n");
		break;
		default:
		printf("Consonant\n");
	}
	return 0;
}