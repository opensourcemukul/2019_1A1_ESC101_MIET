// // nth term of Fibonacci number
// fib(n) = fib(n-1) + fib(n-2)

// //base case
// fib(1) = 1
// fib(2) = 1

// function prototype
int fib(int);
#include <stdio.h>
int main()
{
	int terms, i;
	printf("Enter the number of terms:\n");
	scanf("%d",&terms);
	for (i = 1; i <= terms; ++i)
	{
		printf("Term %d: %d\n", i, fib(i));
	}
	return 0;
}

// function definition
int fib(int n)
{
	if (n == 1 || n == 2) // base case
	{
		return 1;
	}
	return fib(n-1)+fib(n-2);
}