#include<iostream>
using namespace std;

void towerofhanoi(int n,char a,char b,char c)
{
    if(n==1)
    {
        cout<<"MOVE 1 from "<<a<<" to "<<c<<endl;
        return;
    }

    towerofhanoi(n-1,a,c,b);
    cout<<"MOVE "<<n<<" from "<<a<<" to "<<c<<endl;
    towerofhanoi(n-1,b,a,c);
}
   
int main()
{
   int n;
   cout<<"enter the no of discs\n";
   cin>> n;

   towerofhanoi(n,'a','b','c');

   return 0;
}