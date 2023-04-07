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

void printlist(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node *deleteatbegin(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }

    Node *temp = head->next;
    delete head;
    return temp;
}

Node *deleteatend(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }

    if((head->next)==NULL)
    {
        delete head;
        return NULL;
    }

    Node *temp = head;
    while((temp->next->next)!=NULL)
    {
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = NULL;
    return head;
}
   
int main()
{
   Node *head = new Node(10);
   head->next = new Node(20);
   head->next->next = new Node(30);
   head = deleteatbegin(head);
   head = deleteatend(head);

   printlist(head);
   
   return 0;
}