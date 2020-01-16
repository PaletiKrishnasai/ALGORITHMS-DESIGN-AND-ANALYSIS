#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,j,x;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{ 
		cin>>a[i];

	}
	for (int i = 0; i < n; ++i)
	{
		j=i-1;
		x=a[i];
		while(j>-1 && a[j]>x)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
	for (int i = 0; i <n; ++i)

	{ 
			cout<<a[i]<<" ";
	}
}