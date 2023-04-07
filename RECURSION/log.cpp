#include<iostream>
using namespace std;

int logarithm(int n,int b)
{
    if(n<b) return 0;
    else
    {
        return 1 + logarithm(n/b,b);
    }
}

int main()
{
   int base,n;
   cout<<"enter the base and the number >=1\n";
   cin>> base>> n;

   int result = logarithm(n,base);  //floor of logb(n)
   cout<<result<<endl;

   return 0;
}