#include<stdio.h>

int sum=0,l,z,y,n=0,b;
int search(int a,int b)

{
	for (int j=0;j<n;j++)
		for( l=0;l<n-1;l++)
			if(b==(a[l]+a[l+1]))
				{sum=1;
					z=a[l];y=a[l+1];
				}

			if(sum==1)
				return y
}
int main()

{
	//int n;
	scanf("%d",&n);
	int a[n];
	for(int k=0;k<n;k++)
		scanf("%d",&a[k]);
	scanf("%d",&b);
	int p=search(a,b);
	printf("%d\n",p);

}