#include<stdio.h>
#include <math.h>
/* https://github.com/Lamarrus/teach/tree/main/3.8 */
main()
	{
		int max;
		int min;
		int x;
		int y=0;
		int sum=0;
		float tr=0;
		int i=0;
		int j=0;
					{
				printf("Enter amount of numbers ");
				scanf("%d",&y);
					for (;i < y; i++)
						{ 
							if (scanf("%d",&x))
								if (x > max)
									{ 
										max=x; 
									} 
							sum=sum+x;
							tr=tr+x;
					for (;j < y; j++)
							{
								if (x < min)
									{ 
										min=x; 
									} 
							}
						}
			}
		float ark=tr/y;
		printf("Greater number %i\n",max);
		printf("lesser number %i\n",min);
		printf("Sum of numbers %i\n",sum);
		printf("Average %f",ark);
	}
