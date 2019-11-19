#include <stdio.h>
struct teacher
{
	char name[100];
	char emp_id[10];
	char subject_code[10];
	char section[10];
	int no_students_appeared;
	int no_students_passed;
	float pass_percentage;
};
int main(int argc, char const *argv[])
{
	struct teacher teacher_arr[3];
	int sum = 0;
	float avg;
	for (int i = 0; i < 3; ++i)
	{
		printf("Enter name:\n");
		scanf(" %s", teacher_arr[i].name);
		printf("Enter emp_id:\n");
		scanf(" %s", teacher_arr[i].emp_id);
		printf("Enter subject_code:\n");
		scanf(" %s", teacher_arr[i].subject_code);
		printf("Enter section:\n");
		scanf(" %s", teacher_arr[i].section);
		printf("Enter no_students_appeared:\n");
		scanf(" %d", &teacher_arr[i].no_students_appeared);
		printf("Enter no_students_passed:\n");
		scanf(" %d", &teacher_arr[i].no_students_passed);
		teacher_arr[i].pass_percentage = ((float)teacher_arr[i].no_students_passed/(float)teacher_arr[i].no_students_appeared)*100;
		printf("Pass percentage for Prof. %s is %f\n", teacher_arr[i].name, teacher_arr[i].pass_percentage);
	}
	return 0;
}