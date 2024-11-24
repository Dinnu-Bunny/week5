#include<stdio.h>
int main()
{
	int i,j,n,k,c;
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	printf("Enter the values");
	scanf("%d",&a[i]);
	}
	printf("Enter the sum value");
	scanf("%d",&c);
	for(i=0;i<n-2;i++)
		{
			for(j=i+1;j<n;j++)
				{
					for(k=j+1;k<n;k++)
					{
						if(a[i]+a[j]+a[k]==c)
						printf("%d,%d,%d \n",a[i],a[j],a[k]);
						break;
					}
				}
		}
		return 0;
}
