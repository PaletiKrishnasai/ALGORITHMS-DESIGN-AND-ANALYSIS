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
    cout<<"Enter the number of disks to be moved"<<endl;
    cin>>n;
    cout<<"The sequence of steps to be taken is"<<endl;
    cout<<endl<<"Total number of steps taken to move the disks is "<<TOH(n,1,2,3)<<endl;

    return 0;

}
