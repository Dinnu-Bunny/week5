#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the values");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=1;(j<n)&&(j>i);j++)
		{
		if(a[i]=a[j])
		printf("%d ,",a[i]);
	    }
	}
	return 0;
}
