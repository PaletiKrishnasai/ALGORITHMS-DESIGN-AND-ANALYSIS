#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int a[1000000];
int tmp[1000000];
using namespace std;

void merge(int b,int e)
{
	int mid=(b+e)/2;
	int i=b,j=mid,ct=0;

	while(i<mid&&j<e)
	{
		if(a[i]<a[j])
		{
			tmp[ct]=a[i];
			i++;
		}
		else
		{
			tmp[ct]=a[j];
			j++;
		}
		ct++;
	}
	while(i<mid)
	{
		tmp[ct]=a[i];
		i++;
		ct++;
	}
	while(j<e)
	{
		tmp[ct]=a[j];
		j++;
		ct++;
	}


	for(i=b;i<e;i++)
	{	
	
		a[i]=tmp[i-b];
	}
	
}

void insort(int b,int e)
{
	int i,j,k,tmp;
	for(i=b+1;i<e;i++)
	{
		tmp=a[i];		
		for(j=b;j<i;j++)
		{
			if(a[j]>a[i])
				break;	
		}
		for(k=i;k>=j;k--)
		{
			a[k]=a[k-1];
		}
		a[j]=tmp;
	}
}

void divsort(int b,int e)
{
	static int ct=0;
	if(e-b<13000)     //CHOOSING 13000 instead of 10000 to always stay in vicinity of 14000 (because if exactly 10000 we end up going to 5000 which is 50% lower
	{
		insort(b,e);
		ct++;
	}
	else
	{
		divsort(b,(b+e)/2);
		divsort((b+e)/2,e);
		merge(b,e);
	}


	cout<<"running";
	for(int i=0;i<ct;i=i+10)
 		cout<<'*';
	cout<<'\n';
}

int main()	
{
	srand(time(NULL));
	for(int i=0;i<1000000;i++)
		a[i]=rand();
	divsort(0,1000000);

	for(int i=0;i<999999;i++)
	{
		if(a[i]>a[i+1])
			{
				cout<<"fail"<<i<<" ";
				return(0);
			}			
	}
	cout<<"sucess";
}
