#include<stdio.h>
int recur(int a,int b,int mn){
	if(a%mn==0 && b%mn==0)
		return mn;
	return recur(a,b,mn-1);
}
int main(){
	int a,b,mn;
	scanf("%d%d",&a,&b);
	if(a>b)
		mn=b;
	else
		mn=a;
	printf("%d",recur(a,b,mn));
	while(mn){
		if(a%mn==0 && b%mn==0)
		{
			printf("\n%d",mn);
			break;
		}
		mn--;
	}	
	return 0;
}

