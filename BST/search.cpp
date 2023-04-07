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

bool searchBSTrec(Node *root,int key)   //O(H)TIME AND O(H)SPACE
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->data==key)
    {
        return true;
    }
    else if(root->data>key)
    {
        return searchBSTrec(root->left,key);
    }
    else
    {
        return searchBSTrec(root->right,key);
    }
}

bool searchBSTitr(Node *root,int key)  //O(H)TIME AND O(1)SPACE
{
    while(root!=NULL)
    {
        if(root->data==key)
        {
            return true;
        }
        else if(root->data>key)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return false;
}

int main()
{
    Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);
	int x=16;
	
	if(searchBSTrec(root,x))
	    cout<<"Found";
	else
	    cout<<"Not Found";

    cout<<endl;    

    if(searchBSTitr(root,x))
	    cout<<"Found";
	else
	    cout<<"Not Found";    
    return 0;
}