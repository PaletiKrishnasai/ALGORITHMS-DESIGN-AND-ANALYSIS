#include<bits/stdc++.h>
using namespace std;

int begin,mid,end;

void merge(int arr[],int begin,int mid,int end)
{
	int i,j,k;
	int L[mid-begin+1], R[end-begin];
	
	for(i=0;i<mid-begin+1;i++)
	{
		L[i]=arr[begin+i];
	}
	for(j=0;j<end-mid;j++)
	{
		R[j]=arr[mid+1+j];
	}
	i=0,j=0; /*Initial indexes of left and right subarrays*/
	k=begin; /*Initial index of merged subarray*/
	while((i<mid-begin+1)&&(j<end-mid))
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<mid-begin+1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<end-mid)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
}

void Mergetwo(int arr[],int begin,int end)
{
	if(begin<end)
	{
		int mid=(begin+end)/2;
		Mergetwo(arr,begin,mid);
		Mergetwo(arr,mid+1,end);
		merge(arr,begin,mid,end);
	}
}


/*void Mergearr(int arr[][1000],int n,int size)
{
	int a[size],b[size];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<size;j++)
		{
			a[j]=arr[i][j];
			b[j]=arr[i+1][j];
		}
		Mergetwo(0,size,a,b,);
	}
}*/

int main()
{
	int n;
	cout<<"Enter the number of arrays"<<endl;
	cin>>n;
	int size;
	cout<<"Enter the size of the arrays"<<endl;
	cin>>size;
	cout<<"Enter the members of the array"<<endl;
	int arr[n][size];
	cout<<"Enter the array"<<endl;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<size;j++)
		{
			cin>>arr[i][j];
		}
	}
	int arr1[n*size];
	for(i=0;i<size;i++)
	{
		arr1[i]=arr[0][i];
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<size;j++)
		{
			arr1[i*size+j]=arr[i][j];
		}
		Mergetwo(arr1,0,i*size+j);
	}
	for(i=0;i<n*size;i++)
	{
		cout<<arr1[i]<<" ";
	}
	return 0;
}