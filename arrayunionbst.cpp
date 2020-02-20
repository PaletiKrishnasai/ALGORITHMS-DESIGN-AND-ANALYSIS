#include<bits/stdc++.h>
using namespace std;
struct node
{
	int key;
	struct node *left,*right;

};

//void inorder(struct node *ptr);
	

struct node* insert(struct node *root , int data){
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->key = data;
	if(root == NULL){
		root = (struct node *)malloc(sizeof(struct node));
		root->left = NULL;
		root->right = NULL;
	}
	else if(data <= root->key){
		root->left = insert(root->left,data);		
	}
	else{
		root->right = insert(root->right,data);			
	}
	return root;
}	
	void inorder(struct node *root)

	{	//if(ptr==NULL)
		//cout<<"fuck u pk";
		if(root!=NULL)
		{
			inorder(root->left);
			printf("%d\n",root->key );
			//cout<<root->key<<endl;
			inorder(root->right);
		}
	}
int main()

{   struct node *root =NULL;
	printf("i work\n");
 insert(root,6);
 if(root==NULL)
 	printf("hi");
 insert(root,9);
 insert(root,8);
  insert(root,12);

  inorder(root);
//cout<<"1 done";
}


