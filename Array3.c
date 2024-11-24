#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	printf("Enter the values");
	scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(a[j]==a[i])
    		printf("%d",a[j]);
		}
		
	}
	return 0;
}
    
