#include<stdio.h>
int main()
{
	int n,i,j,s=0;
	printf("Enter The Value Of n is");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	printf("Enter The values");
	scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n-i-1;j++)
    	{
    		if(a[j].a[j+1])
    		{
    			int c;
    			c=a[j+1];
    			a[j+1]=a[j];
    			a[j]=c;
			}
		}
	}
	if(a[j+1]==a[j]+1)
	printf(" ");
	else if(a[j+1]==a[j]+2)
	printf("%d",a[j]+1);
	else if(a[j+1]==a[j]+3)
	printf("%d,%d",a[j]+1,a[j]+2);
	
