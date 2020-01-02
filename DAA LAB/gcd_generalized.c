#include<stdio.h>
int recur(int a,int b)
{
	if(a>b)
	{
		if(a%b==0)
			return b;
	a=a%b;
	return recur(a,b);
	
    }
    else
    {
    	if(b%a==0)
    		return a;
    b=b%a;
    return recur(a,b);
	}
	
}
int main()
{
	int n,k,res;
	scanf("%d",&n);
	int a[n];
	for( k=0;k<n;k++)
		scanf("%d",&a[k]);
	res=a[0];
	for( k=1;k<n;k++)
		res=recur(res,a[k]);
	printf("%d",res);
return 0;
}
