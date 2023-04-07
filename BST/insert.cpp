#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left,*right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

// if root is NULL then we have to return key as the new root thats why return type is root
Node *insertrec(Node *root,int key)   //O(H)TIME AND O(H)SPACE
{
    if(root==NULL)
    {
        return new Node(key);
    }
    else if(root->data>key)
    {
        root->left = insertrec(root->left,key);
    }
    else
    {
        root->right = insertrec(root->right,key);
    }

    return root;
}

Node *insertitr(Node *root,int key)  //O(H)TIME AND O(1)SPACE
{
    Node *temp = new Node(key);
    Node *parent = NULL;
    Node *curr = root;
    while(curr!=NULL)
    {
        parent = curr;
        if(curr->data==key)
        {
            return root;
        }
        else if(curr->data>key)
        {
            curr=curr->left;
        }
        else
        {
            curr=curr->right;
        }
    }

    if(parent==NULL)
    {
        return temp;
    }
    else if(parent->data>key)
    {
        parent->left = temp;
    }
    else
    {
        parent->right = temp;
    }

    return root;
}

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);    
    }
} 

int main()
{
    Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	int x=20;
	
	root=insertrec(root,x);
	inorder(root);
    cout<<endl;
    root=insertitr(root,x);
	inorder(root);
    return 0;
}