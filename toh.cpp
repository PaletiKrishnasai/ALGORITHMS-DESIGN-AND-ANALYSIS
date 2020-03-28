#include<bits/stdc++.h>
using namespace std;
int TOH(int n,int a ,int b, int c)
{   int count=0;

    if(n>0)
    {
     count=TOH(n-1,a,c,b);
        cout<<"move a disc from "<<a<<" to "<<c<<endl;
        count++;
        count+=TOH(n-1,b,a,c);
    }
    return count;
}


int main()
{
    int n;
    cin>>n;
    cout<<TOH(n,1,2,3)<<endl;

    return 0;

}
