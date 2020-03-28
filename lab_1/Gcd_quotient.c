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
	int a,b,c,x,y;
	scanf("%d%d",&a,&b);
	printf("%d",recur(a,b));
	if(a<b)
	{
		x=a;
		y=b;
	}
	if(a>b)
	{
		x=b;y=a;
		
	}
	c=y%x;
while(c>0)
{
	c=y%x;
	if(c==0)
	break;
	y=x;
	x=c;
}
printf("\n%d\n",x);
return 0;
}
