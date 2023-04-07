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

Node *deleteatbegin(Node *head)
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
    else
    {
        Node *temp = head->next;
        head->next->prev = temp;
        delete head;
        return temp;
    }
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
    else
    {
        Node *curr = head;
        while((curr->next)!=NULL)
        {
            curr = curr->next;
        }
        curr->prev->next = NULL;
        delete curr;
        return head;
    }
}
   
int main()
{
   Node *head = new Node(10);
   head->next = new Node(20);
   head->next->prev = head;
   head->next->next = new Node(30);
   head->next->next->prev = head->next;
   printlist(head);
   head = deleteatbegin(head);
   printlist(head);
   head = deleteatend(head);
   printlist(head);
   return 0;
}