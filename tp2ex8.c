/*
 ============================================================================
 Name        : tp2ex8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
void main()
{
	int a;
	float x;
	printf("donner le nombre d anne");
	scanf("%d",&a);
	if(a>5)
		x=0.095;
	else if ((a<=5)&&(a>3))
		x=0.085;
	else if((a<=3)&&(a>1))
		x=0.65;
	else
		{x=0.058;}
	printf("le taux d interet est %f",&x);

}
