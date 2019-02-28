# include<stdio.h>
void main()
{
	//calculation of rectangle
	float a,b;
	printf("enter the numbers");
	
	scanf("%f%f",&a,&b);
	//area of rectangle
	float c=a*b;
	printf("the area of rectangle is %f\n",c);
	//perimeter of rectangle
	float d=2*(a+b);
	printf("the perimeter of rectangle is %f\n",d);
	//calculation of circle
	float r,l,p;
	printf("enter the number of radius");
	scanf("%f",&r);
	const float pi=3.14;
	//area of circle
	l=pi*r*r;
	printf("the area of circle is %f\n",l);
	//circumference of circle
	p=2*pi*r;
	printf("the perimeter of circle is %f\n",p);
	
	
}
