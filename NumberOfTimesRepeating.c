#include<stdio.h>
int main()
{
	int n,i,j,k;
	int s=0;
	printf("Enter The Value Of n is");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	printf("Enter The values");
	scanf("%d",&a[i]);
    }
    printf("Enter The Required Number");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
     if(a[i]==k)
	 s++;	
	}
	printf("Number of times repeating %d",s);
	return 0;
}
    
