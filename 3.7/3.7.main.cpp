#include<stdio.h>
/* https://github.com/Lamarrus/teach/tree/main/3.7 */
main()
{
	int i=1;
	int sum=0;
	for(;i<100;i=i+1)
		{
			sum=sum+i;
		}
	sum=sum+i;
	printf("Sum %i=%i",i,sum);
}

