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
    for(j=0;j<n-1;j++)
    {	for(i=j+1;i<n;i++)
    	{	if (a[j]==a[i])
    			{
				printf("The First Repeating Element is %d \n",a[j]);
    			printf("Index is %d",j);
    			break;}
		}
	}
	return 0;
}
