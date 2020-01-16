#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>


void bsort(int a[1000]);
int sum1();
int sum2();
void swap(int i,int j);


int n, ar[1000],x,b[1000],a[1000],temp;


int main()
{
    
    printf("\nEnter size of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        ar[i]=x;
    }

    bsort(ar);

    for(int i=0;i<n/2;i++)
    {
        a[i]=ar[i];
        b[i]=ar[n/2+i];
    //  printf("%d %d",a[i],b[i]);

    }
    sum1();
    sum2();
    x=abs(sum1()-sum2());
//    printf("%d %d %d",sum1(),sum2(),x);

    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            swap(i,j);
          //  printf("%d %d",a[i],b[j]);
            temp=abs(sum1()-sum2());
            if(temp<x)
                x=temp;
            else
                swap(i,j);
          //  printf("%d %d\n",a[i],b[j]);
        }
    }
    printf("\nThe partitioned arrays are:\n");
    for(int i=0;i<n/2;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<n/2;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}
void bsort(int a[1000])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int sum1()
{
    int s=0;
    for(int i=0;i<n/2;i++)
    {
        s=s+a[i];
    }
    return s;
}
int sum2()
{
    int s=0;
    for(int i=0;i<n/2;i++)
    {
        s=s+b[i];
    }
    return s;
}
void swap(int i,int j)
{
    int temp=a[i];
    a[i]=b[j];
    b[j]=temp;
}