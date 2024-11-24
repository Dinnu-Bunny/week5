#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter The Value Of n is");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	printf("Enter The values");
	scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
    	for(j=0;j<n-1;j+=2)
    	{
    	int c;
    	c=a[j+1];
    	a[j+1]=a[j];
    	a[j]=c;
        }
    }
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return 0;
}
