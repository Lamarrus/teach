#include<stdio.h>
/* https://github.com/Lamarrus/teach/tree/main/3.6 */
main()
{
	int a=0;
	while(a!=7)
		{
			printf("Enter number\n");
			scanf("%i",&a);
				if(a>7)
				{
					printf("Number is greater 7\n");
				}
				if(a<7)
				{
					printf("Number is less 7\n");
				}
				if(a%2==0)
				{
					printf("Divided into 2\n");
				}
				if(a>10)
				{
					printf("Number is greater 10\n");
				}
				if(a<10&&a!=7)
				{
					printf("Number is less 10\n");
				}
				if(a%3==0)
				{
					printf("Divided into 3\n");
				}
		}
	printf("Your WIN!");
}
