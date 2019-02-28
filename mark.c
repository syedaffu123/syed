#include<stdio.h>
void main()

{
	int eng,hin,math,science,social;
	float maxmarks=500,percentage;
	printf("enter the marks that you obtained in eng\n,hin\n,math\n,science\n,social\n");
	scanf("%d%d%d%d%d",&eng,&hin,&math,&science,&social);
	percentage = ((eng+hin+math+science+social)/maxmarks)*100;
	if(percentage>=60)
		printf("first division %f\n",percentage);
	else if((percentage<=59)&&(percentage>50))
		printf("second division %f\n",percentage);
	else if((percentage<=49)&&(percentage>40))
		printf("third division %f\n",percentage);
	else
		printf("fail %f\n",percentage);
}
