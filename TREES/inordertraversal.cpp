#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void inorder(Node *root)   //time-O(nodes) space-O(height)
{
    Node *curr = root;
    if(curr!=NULL)
    {
        inorder(curr->left);
        cout<<curr->data<<" ";
        inorder(curr->right);
    }
}

int main()
{
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);

    inorder(root);
    return 0;
}