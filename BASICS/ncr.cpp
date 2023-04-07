#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }

    return n*fact(n-1);
}
   
int main()
{
   int n,r;
   cout<<"enter n and r\n";
   cin>> n>> r;

   if(n>=r)
   {
      int result = fact(n)/(fact(r)*fact(n-r));
      cout<<result<<endl;
   }
   else
   {
      cout<<"invalid inputs\n";
   }
   
   return 0;
}