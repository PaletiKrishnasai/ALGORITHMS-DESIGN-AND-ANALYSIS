#include<stdio.h>
int recur(int a,int b)
{
	if(a==b)
		return a;
	if(a>b)
		a=a-b;
	else
		b=b-a;
	return recur(a,b);
}
int main()
{
	int a,b,x,y;
	scanf("%d%d",&a,&b);
		printf("%d",recur(a,b));
	while(a!=b)
	{
	if(a>b)
	a=a-b;
	if(b>a)
	b=b-a;
	}
printf("\n%d\n",a);
return 0;
}
