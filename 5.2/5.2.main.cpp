#include <stdio.h>
/* https://github.com/Lamarrus/teach/tree/main/5.2 */
main()
	{
		int mas[100][100];
		int l,h;
			printf("Enter amount of elements ");
			scanf("%i",&l);
			printf("Enter amount of lines ");
			scanf("%i",&h);
				for(int i=0;i<h;i++)
					{
						for(int j=0;j<l;j++)
							{
								scanf("%i",&mas[i][j]);
							}
					}
				for(int i=0;i<h;i++)
					{
						for(int j=0;j<l;j++)
							{
								printf("%2i",mas[i][j]);
							}
						printf("\n");
					}
				
	}
