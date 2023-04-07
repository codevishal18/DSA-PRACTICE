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

int getMax(Node *root)   //TIME-O(N) AND SPACE-O(H)
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    else
    {
        return max(root->data,max(getMax(root->left),getMax(root->right)));
    }
}

int main()
{
    Node *root=new Node(20);
	root->left=new Node(80);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	
	cout<<getMax(root);
    return 0;
}