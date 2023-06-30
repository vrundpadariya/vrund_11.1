#include<stdio.h>
main()
{
	int a,b,c;
	int *p;
	int *q;
	
	printf("enter the value of a:");
	scanf("%d",&a);
	
	printf("enter the value of b:");
	scanf("%d",&b);
	
	p=&a;
	q=&b;
	c=*p;
	*p=*q;
	*q=c;
	
	printf("After swapping:%d\n");
	printf("a : %d\n",*p);
	printf("b : %d\n",*q);
	
}
