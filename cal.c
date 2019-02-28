#include<stdio.h>
void main()
{
char c;
float a,b,res;
printf("what operation you want to perform: '+' add\n'-' sub\n'*' mult\n'/'div\n");
scanf("%c",&c);
switch (c)
{
case '+':printf("enter the numbers\n");
	scanf("%f%f",&a,&b);
	res=a+b;	
	printf("%f is the sum of two numbers\n",res);
	break;
case '-':printf("enter the numbers\n");
	scanf("%f%f",&a,&b);
	res=a-b;
	printf("%f is the difference of two numbers\n",res);
	break;
case '*':printf("enter the numbers\n");
	scanf("%f%f",&a,&b);
	res=a*b;
	printf("%f is the product of two numbers\n",res);
	break;
case '/':printf("enter the numbers\n");
	scanf("%f%f",&a,&b);
	res=a/b;
	printf("%f is the quotient of two numbers\n",res);
	break;
default:printf("enter  a valid choice\n");
}
}

