#include<iostream>
using namespace std;

void dtob(int n)
{
    if(n==0)  return;

    dtob(n/8);
    cout<<(n%8);
}

int main()
{
   int n;
   cout<<"enter a number\n";
   cin>> n;

   dtob(n);

   return 0;
}