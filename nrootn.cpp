#include<bits/stdc++.h>
using namespace std;
#define long long long int

int main()
{
    long n,k,f=0;
    cout<<"Enter n :"<<endl;
    cin>>n;
    
    for(long i=2;i<=sqrt(n);i++)
    {
        k=n;

        while(k>0)
        {
            k-=i;
        }

        if(k==0)
        {
            cout<<"Not prime"<<endl;
            f++;
            break;
        }
    }

    if(f==0)
    {
        cout<<"Prime"<<endl;
    }
    return 0;
}