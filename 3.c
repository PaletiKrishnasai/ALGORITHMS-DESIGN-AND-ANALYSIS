#include<stdio.h>

int main()

{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{	for (int j =1; j <=n-i+1;j++ )
		{
			printf("%d ",j);
		}
		printf("\n");
}
 printf("\n\n");

for(int i=1;i<=n;i++)
	{	for (int j =1; j <=n;j++ )
		{	if(j<i)
				printf("  ");
		

			else
				printf("%d ",j);
		}
		printf("\n");
}


for(int i=1;i<=n;i++)
	{	for (int j =1; j <=i;j++ )
		{
			printf("%d ",j);
		}
		printf("\n");
}

 printf("\n\n");

for(int i=1;i<=n;i++)
	{	for (int j =1; j<=n;j++ )
		{
			if(i+j<=n)
				printf("  ");
			else
				printf("%d ",j);
		}
		printf("\n");
}


 printf("\n\n");

for(int i=1;i<=n;i++)
	{	for (int j =1; j<=n;j++ )
		{	
			if(j>i && j<n)
				printf("%d",j);
			else
				printf(" ");
		}
		printf("\n");
}

return 0;
}

