//WAP to find area of circle,rectangle and triangle .
#include<stdio.h>
int main()
{
	float c,r,t,rad,len,wid,base,h;
	printf("\nEnter the radius of Circle = ");
	scanf("%f",&rad);
	printf("\nEnter the length of Rectangle = ");
	scanf("%f",&len);
	printf("\nEnter the width of Rectangle = ");
	scanf("%f",&wid);
	printf("\Enter the base of Triangle = ");
	scanf("%f",&base);
	printf("\nEnter the height of Triangle = ");
	scanf("%f",&h);
	c=((3.14)*(rad*rad));
	printf("\Area of circles is = %.3f",c);
	r=(len*wid);
	printf("\nArea of Rectangle is = %.3f",r);
	t=((0.5)*(base)*(h));
	printf("\nArea of Triangle is = %.3f",t);
	return 0;	
}
