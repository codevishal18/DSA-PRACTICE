#include<iostream>
using namespace std;

bool isPowerof2(int n)
{
    if(n==0) return false;
    
    if((n&(n-1))==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
   int n;
   cout<<"enter a number\n";
   cin>> n;

   if(isPowerof2(n)==true)
   {
       cout<<"number is power of 2\n";
   }
   else
   {
       cout<<"number is not a power of 2\n";
   }

   return 0;
}