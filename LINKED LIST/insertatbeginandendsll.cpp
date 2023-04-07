#include<iostream>
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
    temp->next = head;
    return temp;
}

Node *insertatend(Node *head,int x)
{
    if(head==NULL)
    {
        Node *curr = new Node(x);
        return curr;
    }
    Node *temp = head;
    while((temp->next)!=NULL)
    {
       temp = temp->next;
    }
    temp->next = new Node(x);
    return head; 
}
   
int main()
{
    Node *head = new Node(40);
    head = insertatbegin(head,30);
    head = insertatbegin(head,20);
    head = insertatbegin(head,10);
    head = insertatend(head,50);

    printlist(head);
    return 0;
}