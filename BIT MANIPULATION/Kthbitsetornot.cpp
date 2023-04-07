#include<iostream>
using namespace std;

void kthbitsetornotlso(int n,int k)
{
    if(n&(1<<(k-1))!=0)
    {
        cout<<"yes\n";
    }
    else
    {
        cout<<"no\n";
    }
}

void kthbitsetornotrso(int n,int k)
{
    if((n>>(k-1))&1!=0)
    {
        cout<<"yes\n";
    }
    else
    {
        cout<<"no\n";
    }
}

int main()
{
   int n,k;
   cout<<"enter a number and the position of bit to check whether it is set or not\n";
   cin>> n>> k;

   kthbitsetornotlso(n,k);
   kthbitsetornotrso(n,k);

   return 0;
}