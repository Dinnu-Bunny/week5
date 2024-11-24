#include<stdio.h>
int main()
{
	int n,i,j;
	float s=0;
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
		 c=a[j];
		 a[j]=a[j+1];
		 a[j+1]=c; 
	 }
     }
	}
	printf("Minimum Value is %d \n",a[0]);
	printf("Maximum Value is %d \n",a[n-1]);
	for(i=0;i<n;i++)
	s=s+a[i];
	printf("Average Value is %f",(s/n));
	return 0;
}
