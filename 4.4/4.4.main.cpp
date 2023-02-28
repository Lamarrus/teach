#include <stdio.h>
/* https://github.com/Lamarrus/teach/tree/main/4.4 */
main()
	{
		int mas[100];
		int y;
			printf("Enter amount of numbers ");
			scanf("%i",&y);
			for(int i=0;i<y;i++)
				{
					scanf("%i",&mas[i]);
				}
			int min,max;
			min=max=mas[0];
			int sum=0;
				for(int i=0;i<y;i++)
					{
						if(mas[i]>max)
							{
								max=mas[i];
							}
						if(mas[i]<min)
							{
								min=mas[i];
							}
						sum+=mas[i];
					}
				float ark=(float)sum/(float)y;
		printf("Greater number %i\n",max);
		printf("lesser number %i\n",min);
		printf("Sum of numbers %i\n",sum);
		printf("Average %f",ark);
	}
