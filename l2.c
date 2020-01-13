#include<stdio.h>
//#include<bubblesort.c>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n-1;i++)
		{for(int j=0;j<n-i-1;j++)
			{	if(a[j]>a[j+1])
				{
				a[j]=a[j]^a[j+1];
				a[j+1]=a[j]^a[j+1];
				a[j]=a[j]^a[j+1];
				}
			}
		}
	for(int k=0;k<n;k++)
		printf("%d ",a[k]);

	int p,q,r;
	printf("\nenter r\n");
	scanf("%d",&r);
	
	//for (int i = 0; i < n; i++)
	{
	p=a[0];
	//printf("%d\n",p );
	int beg,end,mid;
	beg=0;
	end=n-1;
	q=r-p;
	//printf("%d\n",q );
	while(beg<=end)
	{	mid=(beg+end)/2;
		if(q==a[mid])
			{	//printf("%d\n",a[mid] );
				break;
			}
		if(q<a[mid])
			end=mid-1;
		else
			beg=mid+1;

	}
		//if(beg>end)
	//	printf("element absent\n");
	
	}
	printf("%d %d",p,q);

}