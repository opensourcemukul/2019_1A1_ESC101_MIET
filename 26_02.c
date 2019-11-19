// Arrays

// In RAM:
// 	Same data-type
// 	Contiguous memory allocation

// For Programmers:
// 	same type of items
// 	all the items will be side-by-side
// 	index

#include <stdio.h>
int main()
{
	int a[5]; //declaring an array a
	a[0] = 10; // assignment
	a[1] = 20;
	a[2] = 30;
	a[3] = 40;
	a[4] = 50;
	printf("%d\n", a[3]); // accessing 
	scanf(" %d", &a[3]); // reading into an array index
	printf("%d\n", a[3]); // accessing 
	
	return 0;
}