# include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the numbers");
	
	scanf("%d%d", &a,&b);
	printf("The value of a and b before swaping is %d\t%d", a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value of a and b after swaping is %d\t%d" ,a,b);
}  
