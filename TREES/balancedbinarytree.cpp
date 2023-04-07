#include<bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

int height(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        return 1+max(height(root->left),height(root->right));
    }
}

bool isbalanced(Node *root)   //TIME-O(N^2)
{
    if(root==NULL) return true;
    int lh = height(root->left);
    int rh = height(root->right);
    return (abs(lh-rh)<=1 && isbalanced(root->left) && isbalanced(root->right));
}

int isbalanced1(Node *root){   //TIME-O(N)
    if(root==NULL)
        return 0;
    int lh=isbalanced1(root->left);

    if(lh==-1)  return -1;

    int rh=isbalanced1(root->right);

    if(rh==-1)  return -1;
    
    if(abs(lh-rh)>1)
        return -1; 
    else
        return max(lh,rh)+1;
}

int main()
{
    Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(30);
	root->right->left=new Node(15);
	root->right->right=new Node(20);

    cout<<isbalanced(root)<<endl;
    if(isbalanced1(root))
	    cout<<"Balanced";
	else
	    cout<<"Not Balanced";
    return 0;
}