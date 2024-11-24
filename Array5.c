#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	printf("Enter the values");
	scanf("%d",&a[i]);
	}
	printf("Enter the sum value");
	scanf("%d",&k);
	for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
				{
					if(a[i]+a[j]==k)
					printf("%d,%d \n",a[i],a[j]);
					break;
				}
		}
		return 0;
}
