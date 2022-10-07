#include<stdio.h>
main()
{
	char ch;
	printf("\nEnter a Character :");
	scanf("%c",&ch);
	switch(ch)
	{
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
		
		printf("%c is Vowel",ch);
		break;
		default:
		printf("%c is Consonant",ch);
	}
}