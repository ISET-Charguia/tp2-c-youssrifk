/*
 ============================================================================
 Name        : tp2EX7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void main()
{
	char c ;
	printf("donner un caractere");
	scanf("%c",&c);
	if((c>="a")&&(c<="z"))
	{	printf("caractere alphabetique miniscule");}
	else if((c>="A")&&(c<="Z"))
		{printf("caractere alphabetique majiscule");}

	else if((c>="0")&&(c<="9"))
	{	printf("chiffre");}
			else
				printf("symbole");
}
