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

//for 1 traversal we maintain 2 pointers slow and fast slow=slow->next fast = fast->next->next
void printmiddle1(Node *head)
{
    if(head==NULL)  return;
    Node *slow = head;
    Node *fast = head;
    //fast!=NULL for even and fasy->next!=NULL for odd no of nodes
    while(fast!=NULL && fast->next!=NULL)   
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->data;
}

void printmiddle(Node *head)  //O(nodes) 2traversals
{
    if(head==NULL) return;
    int count = 0;
    Node *curr;
    for(curr = head;curr!=NULL;curr=curr->next)
    {
        count++;
    }

    Node *temp = head;
    for(int i=0;i<count/2;i++)
    {
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}

int main()
{
   Node *head = new Node(10);
   head->next = new Node(20);
   head->next->next = new Node(30);
   head->next->next->next = new Node(40);
   printmiddle(head);
   printmiddle1(head);
   return 0;
}