#include <stdio.h>
/* https://github.com/Lamarrus/teach/tree/main/2.4 */
main() 
{
	int day;
		printf("What day of the week? ");
		scanf("%i",&day);
			switch(day)
				{
					case 1:
						{
							printf("Monday");
						}
						break;
					case 2:
						{
							printf("Tuesday");
						}
						break;
					case 3:
						{
							printf("Wednesday");
						}
						break;
					case 4:
						{
							printf("Thursday");
						}
						break;
					case 5:
						{
							printf("Friday");
						}
						break;
					case 6:
						{
							printf("Saturday");
						}
						break;
					case 7:
						{
							printf("Sunday");
						}
						break;
			default:
				{
					
				}
							printf("Error");
				}
}
