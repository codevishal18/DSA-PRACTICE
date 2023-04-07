#include<iostream>
using namespace std;

void printnto1(int n)
{
    if(n<1) return;
    cout<<n<<" ";
    printnto1(n-1);
}

void print1ton(int n)
{
    if(n<1) return;
    print1ton(n-1);
    cout<<n<<" ";
}

int main()
{
   int n;
   cout<<"enter a number\n";
   cin>> n;

   printnto1(n);
   cout<<endl;
   print1ton(n);

   return 0;
}