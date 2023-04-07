#include <bits/stdc++.h>
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

bool findPath(Node *root, vector<Node *> &p, int n){
    if(root==NULL)return false;
    p.push_back(root);
    if(root->key==n)return true;
    
    if(findPath(root->left,p,n)||findPath(root->right,p,n))return true;
    
    p.pop_back();
    return false;
}

Node *lca1(Node *root, int n1, int n2){   //0(N) TIME WITH 3 TRAVERSALS AND O(N) SPACE
    vector <Node *> path1, path2;
    if(findPath(root,path1,n1)==false||findPath(root,path2,n2)==false)
        return NULL;
    for(int i=0;i<path1.size()-1 && i<path2.size()-1;i++)
        if(path1[i+1]!=path2[i+1])
            return path1[i];
    return NULL;
}

Node *lcaeff(Node *root, int n1, int n2){   //0(N) 1 TRAVERSAL TIME AND 0(H) SPACE
    if(root==NULL)return NULL;
    if(root->key==n1||root->key==n2)
        return root;
    
    Node *lca1=lcaeff(root->left,n1,n2);
    Node *lca2=lcaeff(root->right,n1,n2);
    
    if(lca1!=NULL && lca2!=NULL)
        return root;
    if(lca1!=NULL)
        return lca1;
    else
        return lca2;
}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	int n1=20,n2=50;
	
	Node *ans1=lca1(root,n1,n2);
	cout<<"LCA: "<<ans1->key;
    cout<<endl;

    Node *ans2=lcaeff(root,n1,n2);
	cout<<"LCA: "<<ans2->key;
}