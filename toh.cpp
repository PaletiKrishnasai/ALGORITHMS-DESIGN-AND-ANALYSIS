#include<bits/stdc++.h>
using namespace std;
/*void TOH(int n,int a ,int b, int c)
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        cout<<"move a disc from "<<a<<" to "<<c<<endl;
        TOH(n-1,b,a,c);
    }
}*/

void TOH(int n,int a ,int b, int c)
{
	static int count=0;
    if(n>0)
    {
        TOH(n-1,a,c,b);
        //cout<<"move a disc from "<<a<<" to "<<c<<endl;
        count++;
        TOH(n-1,b,a,c);
    }
    if(n==0)
		cout<<count<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number of disks"<<endl;
    cin>>n;
    TOH(n,1,2,3);
    return 0;

}
