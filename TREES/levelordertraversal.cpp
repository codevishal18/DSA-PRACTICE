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

int height(Node *root){   //time-O(nodes) space-O(h)
    if(root==NULL)
        return 0;
    else
        return (1+max(height(root->left),height(root->right)));
}

void printNodesatdistk(Node *root,int k)  //TIME-O(NODES) SPACE-O(HEIGHT)
{
   if(root==NULL) return;

   if(k==0)
   {
       cout<<root->data<<" ";
   }
   else
   {
       printNodesatdistk(root->left,k-1);
       printNodesatdistk(root->right,k-1);
   }
}

//naive method is to calculate height of tree and print nodes at dist 0,1,...h-1 from root
void printLevel(Node *root)  //time-O(n+h*n)
{
    int h = height(root);
    for(int i=1;i<=h;i++)
    {
        printNodesatdistk(root,i-1);
    }
}

//efficient way is to use queue
void printLeveleff(Node *root)  //time->0(N)  space->O(N)  space is 0(width of tree)
{
    if(root==NULL) return;
    queue<Node *> q;
    q.push(root);
    while(q.empty()==false)
    {
        Node *curr = q.front();
        q.pop();
        cout<<curr->data<<" ";

        if(curr->left!=NULL)
        {
            q.push(curr->left);
        }

        if(curr->right!=NULL)
        {
            q.push(curr->right);
        }
    }
}

int main()
{
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(70);
	
	printLevel(root);
    printLeveleff(root);
    return 0;
}