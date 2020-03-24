#include<bits/stdc++.h>
using namespace std;


struct test
{
	int min;
	int max;
};

struct test comp(int arr[],int n)

{
	struct test t;
	int x;
	if(n%2==0)
	{
		if(arr[0]>arr[1])
		{
			t.min=arr[1];
			t.max=arr[0];
		}
		else
		{
			t.min=arr[0];
			t.max=arr[1];
		}
		x=2;
	}
	else
	{
		t.min=t.max=arr[0];
		x=1;
	}

	while(x<n-1)
	{
		if(arr[x]>arr[x+1])
		{
			if(arr[x]>t.max)
				t.max=arr[x];
			if(arr[x+1]<t.min)
				t.min=arr[x+1];
		}
		else
		{
			if(arr[x+1]>t.max)
				t.max=arr[x+1];
			if(arr[x]<t.min)
				t.min=arr[x];
		}
		x=x+2;
	}

return t;
}

int main()
{
	int n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter"<<n<<"elements"<<endl;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		/* code */
	}
	struct test t=comp(arr,n);
	cout<<"max="<<t.max<<endl;
	cout<<"min="<<t.min<<endl;
	return 0;
}