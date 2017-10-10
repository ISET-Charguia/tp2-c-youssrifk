#include<stdio.h>
void main ()
{
	int a,b,i,j;
	do
	{
		printf("donner la largeur ");
		scanf("%d",&a);
		printf("donner la hauteur ");
				scanf("%d",&b);
	}while(a<0&&b<0);
	for(i=1;i<=b;i++)
	{
		printf("\n");
		for(j=1;j<=a;j++)
		{
			printf("*");
		}
	}
}
