#include<stdio.h>
main()
{
	int n;
	printf("enter the array size:");
	scanf("%d",&n);
	int *p;
	int a[n];
	int i;
	
	printf("enter the array element:\n");
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	p=&a;
	 printf("square of elment is:");
	 
	 	for(i=0;i<n;i++){
	 		printf("%d , ",*(p+i)**(p+i));
		 }
}

