#include<stdio.h>
#include <cstdlib>
/* https://github.com/Lamarrus/teach/tree/main/2.6 */
main()
{
	int year, month, day;
		printf("Press enter year of birth ");
		scanf("%i",&year);
		printf("Press nter month of birth ");
		scanf("%i",&month);
			if(month>12)
				{
					printf("Opppps, big number");
					std::exit(0);
				}
		printf("Press nter day of birth ");
		scanf("%i",&day);
			if(year%4==0)
				{
					printf("Leap year,");
				}
			else
				{
					printf("Normal year,");
				}
switch(year%12)
				{
					case 0:
						{
							printf(" Monkey,");
						}
						break;
					case 1:
						{
							printf(" Rooster,");
						}
						break;
					case 2:
						{
							printf(" Dog,");
						}
						break;
					case 3:
						{
							printf(" Pig,");
						}
						break;
					case 4:
						{
							printf(" Mouse,");
						}
						break;
					case 5:
						{
							printf(" Bull,");
						}
						break;
					case 6:
						{
							printf(" Tiger,");
						}
						break;
					case 7:
						{
							printf(" Cat,");
						}
						break;
					case 8:
						{
							printf(" Dragon,");
						}
						break;	
					case 9:
						{
							printf(" Snake,");
						}
						break;
					case 10:
						{
							printf(" Horse,");
						}
						break;	
					case 11:
						{
							printf(" Goat,");
						}
						break;	
				}
switch(month)
				{
					case 1:
						if(day<=20)
						{
							printf(" Capricorn");
						}
						else
						{
							printf(" Aquarius");
						}
						break;
					case 2:
						if(day<=20)
						{
							printf(" Aquarius");
						}
						else
						{
							printf(" Pisces");
						}
						break;
					case 3:
						if(day<=20)
						{
							printf(" Pisces");
						}
						else
						{
							printf(" Aries");
						}
						break;
					case 4:
						if(day<=20)
						{
							printf(" Aries");
						}
						else
						{
							printf(" Taurus");
						}
						break;
					case 5:
						if(day<=20)
						{
							printf(" Taurus");
						}
						else
						{
							printf(" Gemini");
						}
						break;
					case 6:
						if(day<=21)
						{
							printf(" Gemini");
						}
						else
						{
							printf(" Cancer");
						}
						break;
					case 7:
						if(day<=22)
						{
							printf(" Cancer");
						}
						else
						{
							printf(" Leo");
						}
						break;
					case 8:
						if(day<=23)
						{
							printf(" Leo");
						}
						else
						{
							printf(" Virgo");
						}
						break;
					case 9:
						if(day<=23)
						{
							printf(" Virgo");
						}
						else
						{
							printf(" Libra");
						}
						break;
					case 10:
						if(day<=23)
						{
							printf(" Libra");
						}
						else
						{
							printf(" Scorpio");
						}
						break;
					case 11:
						if(day<=22)
						{
							printf(" Scorpio");
						}
						else
						{
							printf(" Sagittarius");
						}
						break;
					case 12:
						if(day<=20)
						{
							printf(" Sagittarius");
						}
						else
						{
							printf(" Capricorn");
						}
						break;
				}	
}
