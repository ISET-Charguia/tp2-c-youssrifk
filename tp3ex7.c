#include<stdio.h>
void main() {
	int n, r,x,i,s;
	char c;
	do {
		printf("donner un entier");
		scanf("%d", &n);
	} while (n < 0);
i=1;
s=0;
	do

	{
		r = n % 2;
		x=r*i;
		s=s+x;
		i=i*10;

		n = n / 2;
	} while (n  != 0);
printf("%d",s);

}
