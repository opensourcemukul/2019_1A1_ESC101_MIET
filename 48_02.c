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
	struct student student_arr[3];
	int sum = 0;
	float avg;
	for (int i = 0; i < 3; ++i)
	{
		printf("Enter name:\n");
		scanf(" %s", student_arr[i].name);
		printf("Enter roll:\n");
		scanf(" %s", student_arr[i].roll);
		printf("Enter section:\n");
		scanf(" %s", student_arr[i].section);
		printf("Enter assignment_1 marks:\n");
		scanf(" %d", &student_arr[i].assignment_1);
		printf("Enter assignment_2 marks:\n");
		scanf(" %d", &student_arr[i].assignment_2);
		student_arr[i].internal_marks = student_arr[i].assignment_1 + student_arr[i].assignment_2;
		sum += student_arr[i].internal_marks;
		printf("Internal Marks: %d\n", student_arr[i].internal_marks);
	}
	avg = sum/3;
	printf("The average internal marks is = %f\n", avg);
	return 0;
}