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

void inorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

//finding inorder successor of the target node when right child is not empty
//if right child is empty use the inorder predecessor in the left subtree
Node *getSuccessor(Node *root)  
{
    Node *curr = root->right;
    while(curr!=NULL && curr->left!=NULL)
    {
        curr = curr->left;
    }
    return curr;
}

Node *delNode(Node *root,int x)
{
    if(root==NULL)
    {
        return root;
    }
    else if(root->data>x)
    {
        root->left = delNode(root->left,x);
    }
    else if(root->data<x)
    {
        root->right = delNode(root->right,x);
    }
    else
    {
        //if target node has no child or single child
        if(root->left==NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else  //if target node has both children
        {
            Node *succ = getSuccessor(root);
            root->data = succ->data;
            root->right = delNode(root->right,succ->data);
        }
    }
    return root;
}

int main()
{
   Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	int x=15;
	
	root=delNode(root,x);
	inorder(root);
    return 0;
}