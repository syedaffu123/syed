#include<stdio.h>
void main()
{
	int ram,sham,ajay;
	printf("enter the age for ram, sham,ajay");
	scanf("%d%d%d",&ram,&sham,&ajay);
	if(ram<sham)
		{
		if(ram<ajay)
			printf("ram is youngest among all the three %d \n",ram);
		else
			printf("ajay is youngest among all the three %d \n",ajay);
		}
	else
		{
		if(sham<ajay)
			printf(" sham is the youngest among all the three %d\n",sham);
		else
			printf("ajay is the youngest among all the three %d \n",ajay);
		}
}
