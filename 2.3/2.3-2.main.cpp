#include <stdio.h>
/* https://github.com/Lamarrus/teach/tree/main/2.3 */
main() 
{
	long long int lg1,pwd1;
		printf("Login = ");
		scanf("%i",&lg1);
		printf("Password = ");
		scanf("%i",&pwd1);
	if(((lg1==1234)&&(pwd1==4321))||((lg1==1238)&&(pwd1==4821))||((lg1==1547841548)&&(pwd1==1241584054))||((lg1==34885488)&&(pwd1==32154874)))
		{
			printf("Accept");
		}
	else
		{
			printf("Deny");
		}
}
