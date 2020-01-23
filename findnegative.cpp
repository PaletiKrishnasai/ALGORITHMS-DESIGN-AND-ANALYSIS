#include<bits/stdc++.h>
using namespace std;
int n;
int findOnes(int a[110000],int b,int e)
{
	if(b<e)
		{int m=(b+e)/2;
	return findOnes(a,b,m)+findOnes(a,m+1,e);}
	else
		return a[b]<0;
}


int main()

{
	int i;
	cin>>n;
	int a[110000];
	for ( i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	cout<<findOnes(a,0,n-1)<<endl;


}