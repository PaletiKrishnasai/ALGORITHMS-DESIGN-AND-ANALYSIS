#include<stdio.h>
int main()
{
	int a,b,c,x,y;
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		x=a;
		y=b;
	}
	if(a>b)
	{
		x=b;y=a;
		
	}
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
