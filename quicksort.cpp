#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int part(int arr[] , int low , int high)
{
	int pivot=arr[high];
	int i=(low-1);
	for(int j=low;j<=high-1;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i] , &arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return (i+1);
}

void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int p=part(arr,low,high);

		quicksort(arr,low,p-1);
		quicksort(arr,p+1,high);

	}
}


int main()
{
	int n ;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		/* code */
	}
	quicksort(arr,0,n-1);

	cout<<"sorted order"<<endl;

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i] ;
		/* code */
	}
	return 0;
}