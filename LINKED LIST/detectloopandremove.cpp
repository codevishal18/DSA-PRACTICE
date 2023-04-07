#include<bits/stdc++.h>
using namespace std;

//naive approach is to traverse the LL and for every node we check if the next of this node already exists in the LL O(N^2)

//we modify our LL structure as we keep track of visitation of nodes by bool variable and we taverse the LL as we find a unvisited node we make it visited and we keep on traversing untill we find a null pointer or a node that has been visited O(N)

//we make a temp node and we traverse the LL and we check if the next of current node is temp if yes we return true else we make next of current to temp and move on to the next node , but this destroys the LL

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head)
{
    Node *curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}

bool isLoop1(Node* head)  //destroys LL   O(N)   no aux space
{   Node* temp=new Node(0);
    Node *curr=head;
    while (curr != NULL) {  
        if (curr->next==NULL)
            return false;
        if(curr->next==temp)
            return true;
        Node *curr_next=curr->next;
        curr->next=temp;
        curr=curr_next;
    } 
    return false; 
}

bool isLoop2(Node* head)     // O(N) time and O(N) aux space
{ 
    unordered_set<Node*> s; 
    for(Node *curr=head;curr!=NULL;curr=curr->next) {  
        if (s.find(curr) != s.end()) 
            return true; 
        s.insert(curr); 
    } 
    return false; 
}

bool isLoop3(Node *head)  //FLOYD'S CYCLE DETECTION ALGORITHM  O(Nodes)
{
    Node *slow_p = head;
    Node *fast_p = head;
    while(fast_p!=NULL && fast_p->next!= NULL)
    {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if(slow_p==fast_p)
        {
            break;
        }
    }
    if(slow_p!=fast_p)
    {
        return false;
    }
    slow_p = head;
    while(slow_p->next!=fast_p->next)
    {
        slow_p = slow_p->next;
        fast_p = fast_p->next;
    }
    fast_p->next = NULL;
    return true;
}

int main()
{
    Node *head=new Node(15);
	head->next=new Node(10);
	head->next->next=new Node(12);
	head->next->next->next=new Node(20);
	head->next->next->next->next=head->next;
	/*if (isLoop1(head)) 
        cout << "Loop found"; 
    else
        cout << "No Loop";*/ 

    /*if (isLoop2(head)) 
        cout << "Loop found"; 
    else
        cout << "No Loop";*/

    if (isLoop3(head)) 
        cout << "Loop found\n"; 
    else
        cout << "No Loop\n";  

    // variations on this question 
    // length of loop - for this we first detect loop at he point when we detect loop both fast and slow pointer are at their first meeting position somewhere on the loop we have to start a pointer from that untill that pointer becomes equal to the fast or slow pointers and we keep on incrementing length untill that
    // first node of the cycle - approach similar to the removal of the loop      

    printlist(head);
    return 0;
}