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
    for(i=0;i<n;i++)
    {
     for(j=0;j<n-i-1;j++)
     {
     if(a[j]<a[j+1])
     {
     	int c;
		 c=a[j];
		 a[j]=a[j+1];
		 a[j+1]=c; 
	 }
     }
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return 0;
}
