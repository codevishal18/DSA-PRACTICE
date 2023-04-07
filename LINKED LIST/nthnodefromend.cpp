#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

//we can count the no of nodes and we can go to the (no of nodes - n +1)th node from front
//efficient - 2 pointer approach
int nthnodefromend(Node *head,int n)
{
   if(head==NULL) return -1;
    Node *first=head;
    for(int i=0;i<n;i++){
        if(first==NULL) return -1;
        first=first->next;
    }
    Node *second=head;
    while(first!=NULL){
        second=second->next;
        first=first->next;
    }
    return (second->data);
}

int main()
{
   Node *head = new Node(10);
   head->next = new Node(20);
   head->next->next = new Node(30);
   head->next->next->next = new Node(40);
   int result = nthnodefromend(head,2);
   cout<<result<<endl;
   return 0;
}