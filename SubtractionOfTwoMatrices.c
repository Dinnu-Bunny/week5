#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("Enter the row and column values");
	scanf("%d%d",&r,&c);
	int a1[r][c],a2[r][c],res[r][c];
	printf("Enter the values for a1");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	printf("Enter the values for a2");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			res[i][j]=a1[i][j]+a2[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",res[i][j]);
		}
		printf("\n");
	}
	return 0;
}
