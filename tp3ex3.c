#include <stdio.h>
void main()
{
	int a,s,i;
	do
	{
		printf("donner un entier :");
		scanf("%d",&a);
	}while(a<0);
s=1;
for(i=2;i<=a;i++)
{
	if(a%i==0)2
		s=s+1;
}
if(s==2)
	printf("%d est premier",a);
	else printf("%d est non premier",a);
}
