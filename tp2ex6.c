/*
 ============================================================================
 Name        : tp2ex6.c
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
  float min,max,a,b,c;

 printf("taper les troi variables:");
 scanf("%f",&a);
 scanf("%f",&b);
 scanf("%f",&c);
 max=a;
 min=a;
 if (max<b)
	 max=b;
 if (max<c)
	 max=c;
 if (min>b)
	 min=b;
 if (min>c)
	 min=c;
 printf("le maxi est %f,le min est %f",&max,&min);








 }
