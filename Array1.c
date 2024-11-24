#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the value of n");
	scanf("%d",&n);
	int a[i];
	for(i=0;i<n-1;i++)
	{
	printf("Enter the values");
	scanf("%d",a[i]);
    }
    for(i=0;i<n-2;i++)
    {
    	for(j=0;j<n-i-2;j++)
    	{
    		if(a[j]>a[j+1])
    		{
    		int t;
			t=a[j+1];
			a[j+1]=a[j];
			a[j]=t;	
			}
		}
	}
	for(j=0;j<n-2;j++)
	{
	if(a[j+1]-a[j]==2)
	printf("%d",a[j]+1);
	}
	return 0;
}
