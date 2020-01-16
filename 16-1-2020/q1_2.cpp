#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,j0=0,j1=0,j2=0;
	cin>>n;
	int a[n],b[n],c[n],d[n];
	for (int i = 0; i < n; ++i)

	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if(a[i]==0)
		{
			b[j0]=a[i];
			j0++;
			
		}
		if (a[i]==1)

		{
			c[j1]=a[i];
			j1++;			
		}
		if (a[i]==2)

		{
			d[j2]=a[i];
			j2++;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (b[i]==0)
		{
			 cout<<b[i];
		}
		else break;

	}
	for (int i = 0; i < n; ++i)
	{
		if (c[i]==1)
		{
			 cout<<c[i];
		}
		else break;/* code */
	}
	for (int i = 0; i < n; ++i)
	{
		
		if (d[i]==2)
		{
			 cout<<d[i];
		}
		else break;/* code */
	}
}