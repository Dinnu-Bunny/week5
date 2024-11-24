#include<stdio.h>
int main()
{
	int i,j,n,flag;
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	printf("Enter the values");
	scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {	flag=0;
		for(i=0;i<n;i++)
    	{	if (a[j]==a[i])
    		{	
				flag+=1;
    		}
		}
		if (flag==1)
			{
			printf("%d",a[j]);
			break;}	
	}
	return 0;
}
