#include<stdio.h>
void main()
{
	char c;
	printf("s=sunday\nm=monday\nt=tuesday\nw=wednesday\n");
	printf("enter the choice:");
	scanf("%c",&c);
	switch (c)
	{
	case 's':printf("sunday\n");
		break;
	case 'm':printf("monday\n");
		break;
	case 't':printf("tuesday\n");
		break;
	case 'w':printf("wednesday\n");
		break;
	default:printf("enter the valid choice\n");
	}
}
