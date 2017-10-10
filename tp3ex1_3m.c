/*
 ============================================================================
 Name        : tp3ex1_3m.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include<stdio.h>
void main()
{
int n,f,i;
do
{	printf("donner un entier positif");
     scanf("%d",&n);
}while(n<0);
f=1;
i=1;
for(;i<=n;i++)
	{
	f=f*i;

	}
printf("la factoriel de %d est %d",n,f);//troisieme methode


}

