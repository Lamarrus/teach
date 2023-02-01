#include<stdio.h>
/* https://github.com/Lamarrus/teach/tree/main/3.5 */
main()
{
	int i=1;
	int sum=5;
	while(i<15)
		{
			sum=sum+i;
			i=i+1;
		}
	printf("sum=%i",sum);
}
