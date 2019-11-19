#include <stdio.h>
struct student
{
	char name[100];
	char roll[20];
	char section[5];
	int assignment_1;
	int assignment_2;
	int internal_marks;
};

int main(int argc, char const *argv[])
{
	struct student ankit;
	printf("Enter name:\n");
	scanf(" %s", ankit.name);
	printf("Enter roll:\n");
	scanf(" %s", ankit.roll);
	printf("Enter section:\n");
	scanf(" %s", ankit.section);
	printf("Enter assignment_1 marks:\n");
	scanf(" %d", &ankit.assignment_1);
	printf("Enter assignment_2 marks:\n");
	scanf(" %d", &ankit.assignment_2);
	ankit.internal_marks = ankit.assignment_1 + ankit.assignment_2;
	printf("Internal Marks: %d\n", ankit.internal_marks);
	return 0;
}