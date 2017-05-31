#include <stdio.h>

int main ()
{
	int n,k;
	int a[100];
	scanf("%d%d",&n,&k);
	int i=0,j,tempsum,ans=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			tempsum=a[i]+a[j];
			if((tempsum%k) == 0)
			//	printf("\n%d,%d",a[i],a[j]);
				ans++;	
		}
	}
	printf("%d",ans);
}
