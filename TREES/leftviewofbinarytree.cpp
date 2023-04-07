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

int maxlevel = 0;

void leftviewitr(Node *root)
{
    if(root==NULL)  return;
    queue<Node *> q;
    q.push(root);
    while(q.empty()==false)
    {
        int count = q.size();
        for(int i=0;i<count;i++)   
        { 
            Node *curr = q.front();
            q.pop();
            if(i==0)   //for right view change to i==count-1
            {
                cout<<curr->key<<" ";
            }

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
}

void leftviewrec(Node *root,int level)
{
    if(root==NULL)  return;
    if(maxlevel<level)
    {
        cout<<root->key<<" ";
        maxlevel = level;
    }

    leftviewrec(root->left,level+1);   //for right view first call root->right and then root->left
    leftviewrec(root->right,level+1);
}

int main()
{
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);

    leftviewitr(root);
    cout<<endl;
    leftviewrec(root,1);
    return 0;
}