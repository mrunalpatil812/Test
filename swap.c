#include<stdio.h>

int main()
{
	int i,j;
	printf("Enter two numbers\n");
	scanf("%d %d",&i,&j);
	printf("Number before swapping\n",i,j);
	i^=j;
	j^=i;
	i^=j;
	printf("Number after swapping\n",i,j);
return 0;
}
