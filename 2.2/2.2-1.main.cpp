#include <stdio.h>
/* https://github.com/Lamarrus/teach/tree/main/2.2 */
main()
{
	int x,y;
		printf("Vvedite Pervoe Chislo ");
		scanf("%i",&x);	
		printf("Vvedite Vtoroe Chislo ");
		scanf("%i",&y);
	if(x>y)
		{
			printf("Pervoe Bolshe");
		}
		else
			{
				if(x==y)
				{
					printf("Pervoe ravno Vtoromu");
				}
					else
					{
						printf("Vtoroe Bolshe");
					}
			}
}
