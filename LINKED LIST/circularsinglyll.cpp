#include<iostream>
using namespace std;

struct  Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head)
{
    if(head==NULL)
    {
        return;
    }

    cout<<head->data<<" ";     //can also use do while loop
    for(Node *p=head->next;p!=head;p=p->next)
    {
        cout<<p->data<<" ";
    }
    cout<<endl;
}

int main()
{
   Node *head = new Node(10);
   head->next = new Node(20);
   head->next->next = new Node(30);
   head->next->next->next = head;

   printlist(head);
   return 0;
}