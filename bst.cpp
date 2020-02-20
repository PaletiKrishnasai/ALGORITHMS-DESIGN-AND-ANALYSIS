
#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *lptr,*rptr;
};

struct node *tptr=NULL;

void insert(int x)
{
// create node
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->lptr = temp->rptr = NULL;
//	insert the first node
	if(tptr == NULL)
		tptr = temp;
// insert non-first node	
	else
	{
		struct node* ptr = tptr;
		struct node* pptr = NULL;		
		while(ptr != NULL)
		{
			pptr = ptr;
			if(x<ptr->data)
				ptr = ptr->lptr;
			else 
				ptr = ptr->rptr;
		}
		if(x<pptr->data)
			pptr->lptr = temp;
		else 
			pptr->rptr = temp;
	}
}

void inorder(struct node* ptr)
{
	if(ptr != NULL)
	{
		inorder(ptr->lptr);
		printf("%d ",ptr->data);
		inorder(ptr->rptr);
	}
}

int main()
{
	int n,size;
	cout<<"Enter the no and size of the arrays"<<endl;
	cin>>n;
	cin>>size;
	cout<<"Enter the members of the array"<<endl;
	int i,j;
	int arr[n][size];
	for(i=0;i<n;i++)
	{
		for(j=0;j<size;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<size;j++)
		{
			insert(arr[i][j]);
		}
	}
	inorder(tptr);
	return 0;
}