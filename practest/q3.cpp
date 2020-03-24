#include <bits/stdc++.h>
using namespace std;
int power(int x,  int y) 
{ 
	int temp; 
	if( y == 0) 
		return 1; 
	temp = power(x, y/2); 
	if (y%2 == 0) 
		return temp*temp; 
	else
		return x*temp*temp; 
} 



int main()
{
	
	
	unsigned int n;
	cin>>n; 
	srand(time(NULL));
	int temp;
    int sum=0;

     int a = (int)log2(n);
     cout<<a<<endl;
     for (int i = 0; i < a; ++i)

     {
     	temp=rand() % (n) + a;
     	int b=power(temp,temp+4);
     	 sum+=b;


     }
	cout<<(sum/a);	
}