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

    cout<<head->data<<" ";     
    for(Node *p=head->next;p!=head;p=p->next)
    {
        cout<<p->data<<" ";
    }
    cout<<endl;
}

//we can insert a node between head node and second node and swap data of both
//Node *temp = new Node(x);
//temp->next = head->next;
//head->next = temp;
Node *insertatbegin(Node *head,int x)  //O(NODES)
{
    if(head==NULL)
    {
        Node *temp = new Node(x);
        temp->next = temp;
        return temp;
    }

    Node *curr = head;
    while((curr->next)!=head)
    {
        curr = curr->next;
    }
    Node *temp = new Node(x);
    curr->next = temp;
    temp->next = head;
    return temp;
}

//add new node between node 1 & 2 swap data of new node and head node and update head to head->next
Node *insertatend(Node *head,int x)
{
    Node *temp = new Node(x);
    if(head==NULL)
    {
        temp->next = temp;
        return temp;
    }

    temp->next = head->next;
    head->next = temp;
    int t = head->data;
    head->data = temp->data;
    temp->data = t;
    return temp;
}
   
int main()
{
   Node *head = new Node(10);
   head->next = new Node(20);
   head->next->next = new Node(30);
   head->next->next->next = head;

   head = insertatbegin(head,0);
   head = insertatend(head,40);
   printlist(head);
   return 0;
}