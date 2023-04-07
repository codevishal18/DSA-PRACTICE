#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

void printlist(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node *insertatbegin(Node *head,int x)
{
   Node *temp = new Node(x);
   if(head==NULL)
   {
      temp->next = head;
      return temp;
   }
   else
   {
       temp->next = head;
       head->prev = temp;
       return temp;
   }
}

Node *insertatend(Node *head,int x)
{
    if(head==NULL)
    {
        Node *temp = new Node(x);
        return temp;
    }
    else
    {
        Node *temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = new Node(x);
        temp->next->prev = temp;
        return head;
    }
    
}
   
int main()
{
   Node *head = new Node(10);
   Node *temp1 = new Node(20);
   Node *temp2 = new Node(30);
   head->next = temp1;
   temp1->prev = head;
   temp1->next = temp2;
   temp2->prev = temp1;

   head = insertatbegin(head,0);
   head = insertatend(head,40);

   printlist(head);

   return 0;
}