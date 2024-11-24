#include<stdio.h>
int main()
{
	int n,i,k,j;
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
    	if(a[j]>a[j+1])
    	{
    		int c;
    		c=a[j+1];
    		a[j+1]=a[j];
    		a[j]=c;
		}
	   }
	}
	printf("Enter The Value of k");
	scanf("%d",&k);
	printf("kth smallest is %d \n",a[k-1]);
	printf("kth largest is %d \n",a[n-k]);
	return 0;
}
