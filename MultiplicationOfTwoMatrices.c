#include<stdio.h>
int main()
{
	int i,j,r1,c1,r2,c2,l;
	printf("Enter the row and column values for matrix 1");
	scanf("%d%d",&r1,&c1);
	printf("Enter the row and column values for matrix 2");
	scanf("%d%d",&r2,&c2);
	int a1[r1][c1],a2[r2][c2],res[r1][c2];
	printf("Enter the values for a1");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	printf("Enter the values for a2");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	if(c1==r2)
	{
		for(i=0;i<r1;i++)
		{
			
			for(j=0;j<c2;j++)
			{	int k=0;
				for(l=0;l<c1;l++)
				k=k+a1[i][l]*a2[l][j];
				res[i][j]=k;
			}
		}
	}
	else
	printf("Multiplication is not possible");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",res[i][j]);
		}
		printf("\n");
	}
	return 0;
}
	
