#include<stdio.h>
main()
{
	int n;

	printf("enter  number =");
	scanf("%d", &n);
	int l=n%10;
	while(n>=10)
	{
		n/=10;
	}
	int f=n;
	int sum=f+l;
	printf("The sum of first and last digit :- %d\n",sum);
}