#include<stdio.h>
#include<math.h>
int main()
{
	int digit,num,rem,copy,sum=0;
	printf("please enter the digits of num");
	scanf("%d",&digit);
	printf("please enter the num");
	scanf("%d",&num);
	copy=num;
	while(copy>=10)
	{
		rem=copy%10;
		sum+=pow(rem,digit);
		copy/=10;
		if(copy<10)
		{
			sum+=pow(copy,digit);
		}
	}
	if(sum==num)
		printf("entered number %d is amstrong",num);
	return 0;
}