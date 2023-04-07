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

int main()
{
   //for empty tree Node *root = NULL 
   Node *root = new Node(10);
   root->left = new Node(20);
   root->right = new Node(30);
   root->left->left = new Node(40);   
   return 0;
}