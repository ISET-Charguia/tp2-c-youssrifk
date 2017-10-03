/*
 ============================================================================
 Name        : tp2ex55.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
void main()
{
	int c,d,n,u;
	printf("donner le nombre < a 999 :");
	scanf("%d",&n);
	if ((n>999)||(n<100))
	printf("erreur");
	else
	{
		u= n%10;
		d= (n%100)/10;
		c= n/100;
		printf("%d/%d/%d",u,d,c);
	}

}
