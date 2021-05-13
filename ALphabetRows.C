#include<stdio.h>
void main()
{
	int i,j, rows;
	printf("Enter number of rows you want to print : ");
	scanf("%d",&rows);

	for (i=1;i<=rows;i++)
	{
		for (j=1;j<=i;j++)
		{
		printf("%c ",j+64);
		}

	printf("\n");
	}
}