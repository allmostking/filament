#include<stdio.h>
#include<string.h>

main()
{
	char str1[100];
	printf("Please enter a string :\n");
	gets(str1);

	char str2[100];
	strcpy(str2,str1);
	strrev(str2);
	printf("\nReveresd string is :%s\n",str2);

	if(strcmp(str2,str1)==0)
	{
		printf("\nString is palindrome.");	
	}
	else
	{
		printf("\nString is not palindrome.");
	}






}
