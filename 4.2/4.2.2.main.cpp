#include <stdio.h>
/* https://github.com/Lamarrus/teach/tree/main/4.2 */
main()
	{
		int l;
		int mas[100];
			printf("Enter amount of elements ");
			scanf("%i",&l);
				for(int i=0;i<l;i++)
					{
						scanf("%i",&mas[i]);
					}
				for(int i=0;i<l;i++)
					{
						printf("%i ",mas[i]);
					}
	}
