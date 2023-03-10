//Assignment -1
#include<stdio.h>
main()
{
	int m;
	printf("\n Enter any number");
	scanf("\n %d",&m);
	if(m%3==0&&m%5==0)
	printf("Good Number");
	else if(m%3==0)
	printf("\nBad Number");
	else if(m%5==0)
	printf("\n Poor Number");
	else
	printf("-1");
	return 0;
	
}
