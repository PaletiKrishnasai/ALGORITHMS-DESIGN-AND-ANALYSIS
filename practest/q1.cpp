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
	
	
	if(n==1)
	{
		t.min=t.max=arr[0];
		return t;
	}
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
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]>t.max)
			t.max=arr[i];
		else if(arr[i]<t.min)
			t.min=arr[i];
	}
	return t;


}



int main()
{
	int n;
	cout<<"enter the size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter"<<n<<"elements"<<endl;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	struct test t=comp(arr,n);
	cout<<"max="<<t.max<<endl;
	cout<<"min="<<t.min<<endl;

	return 0;
}
