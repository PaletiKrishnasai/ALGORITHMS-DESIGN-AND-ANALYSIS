#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int gcd(int a, int b); 
int divarr(int p,int q);
//global variables
int a[100];
int main()
{
    int n,x,y;
    printf("\nEnter no. of nuumbers: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        a[i]=x;
    }
    int p=0,q=n-1;
    
    int final=divarr(p,q);
    printf("\nThe gcd is: %d \n",final);    
    return 0;

}
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int divarr(int p,int q)
{
    
     if(p<q)
     {
        int m=(p+q)/2;
        int x=divarr(p,m);
        int y=divarr(m+1,q);
       // printf("%d %d %d %d %d\n",x,y,p,q, gcd(x, y));
        return gcd(x,y);
     }
     else return a[p];
}
// 6 30 10 15 45 45 45
