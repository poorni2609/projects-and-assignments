#include<stdio.h>
main()
{
	int num, i, count=0;
	printf("\n Enter a number:");
	scanf("\n %d",&num);
	for(i=2; i<num; i++)
	{
		if(num%i==0)
		{
			count++;
			break;
		}
}
if(count==0)
printf("\n Its a prime number:");
else
printf("\n Its not a prime number:");
return 0;
}
