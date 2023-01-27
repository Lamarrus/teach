#include <stdio.h>
/* https://github.com/Lamarrus/teach/tree/main/2.3 */
main() 
{
	int lg1,pwd1;
		printf("Login = ");
		scanf("%i",&lg1);
		printf("Password = ");
		scanf("%i",&pwd1);
	if((lg1==1234)&&(pwd1==4321))
		{
			printf("Accept");
		}
	else
		{
			printf("Deny");
		}
}
