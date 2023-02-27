#include <stdio.h>
/* https://github.com/Lamarrus/teach/tree/main/4.3 */
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
    for (int i = 0; i < l-1;i++)
	{
        for (int j = 0; j < l-i-1;j++)
    	{
            if (mas[j]>mas[j+1])
            {
                int z=mas[j];
                mas[j]=mas[j+1];
                mas[j+1]=z;
            }
        }
    }

				for(int i=0;i<l;i++)
					{
						printf("%4i ",mas[i]);
					}
	}

