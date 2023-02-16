#include<stdio.h>
/* https://github.com/Lamarrus/teach/tree/main/3.8 */
main()
	{
		int max=0;
		int min;
		int x;
		int y=0;
		int sum=0;
		int i=0;
			{
				printf("Enter amount of numbers ");
				scanf("%d",&y);
					for (;i < y; i++)
						{ 
							if (scanf("%d", &x))
								if (x > max)
									{ 
										max = x; 
									} 
							sum=sum+x;
						}
					for (;i < y; i++)
						{
							if (scanf("%d", &x))
								if (x < min)
									{ 
										min = x; 
									} 
						}
			}
		printf("Greater number %i\n",max);
		printf("lesser number %i\n",min);
		printf("Sum of numbers %i\n",sum);
		printf("Average %i\n",sum/y);
	}
