#include<stdio.h>
#include<string.h>

main()
{
	char Email[500]={"aryansapariya@gmail.com"};
	char Password[500]={"0107"};
	char Email1[500];
	char Password1[500];



	printf("Please enter your email :");
	gets(Email1);
	printf("Please enter your password :");
	gets(Password1);

	if((strcmp(Email,Email1)==0))
	{
		if((strcmp(Password,Password1)==0))
		{
			printf("Successfully login !!!!");
		}
	   else
		{
			printf("Password not match");
      	}
	}
	else
	{
		    printf("Email not match !!!");
	}

}

