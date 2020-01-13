#include<stdio.h>

int main()

{	int l,j,z,y;
	int n,b;
	scanf("%d",&n);
	int a[n];
	for(int k=0;k<n;k++)
		scanf("%d",&a[k]);
	scanf("%d",&b);
	for(j=0;j<n;j++)
		for(l=0;l<n-1;l++)
			if(b==(a[l]+a[l+1]))
				{
					
					z=a[l];y=a[l+1];
				printf("%d %d\n",z,y);
				}
				else  {z=0;y=0;}
					
	return 0;
}