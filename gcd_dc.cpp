#include<bits/stdc++.h>
using namespace std;
int a[1000];
int gcd(int a,int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}
int dc(int p,int q)
{
	if(p<q)
	{
		int m=(p+q)/2;
		int x=dc(p,m);
		int y=dc(m+1,q);
		return gcd(x,y)
	}
	else return a[p];
}
int main()
{
	int n;
	cin>>n;
	
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	
	int p=0;q=n-1;
	cout<<dc(p,q)<<endl;
		return 0;
}