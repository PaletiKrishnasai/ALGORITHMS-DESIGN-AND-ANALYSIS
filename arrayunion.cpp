#include<bits/stdc++.h>
using namespace std;
int ar[1000][1000];
int op[10000];int n,k;
int size=0;
void merge(int pos)
{
	
	if(pos==k) return;
	if(pos==0)
	{
		for (int i = 0; i < n; ++i)
		{
			op[size++]=ar[0][i];
		}
	}
	else
	{
		
    int L[n], R[size]; 
  
    
    for (int i = 0; i < n; i++) 
        L[i] = ar[pos][i]; 
    for (int j = 0; j <size; j++) 
        R[j] = op[j]; 
  
   
    int i = 0;  
    int j = 0;  
    int loose=0;
    while (i < n ) 
    { 
        if (L[i] <= R[j]) 
         {
            op[loose++] = L[i++]; 
          	size++;  
         }
        else
        {
            op[loose++] = R[j++]; 
        	size++;
        }
             
        
        
    } 
  
   
  
    while (j <(pos*n)) 
    { 
        op[loose++] = R[j++]; 
        
        
    } 
} 
  

	
	
	merge(pos+1);
	}


int main()

{

	
	
	cin>>n;
	cin>>k;
	for (int i = 0; i < k; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin>>ar[i][j];
			
		}
	}
		merge(0);
		for (int i = 0; i < size; ++i)

		{
			cout<<op[i];
			
		}

	
	
}