#include<iostream>
using namespace std;

int sumofnnos(int n)
{
    if(n<1) return 0;
    return n + sumofnnos(n-1);
}

int main()
{
   int n;
   cout<<"enter a number\n";
   cin>> n;

   int result = sumofnnos(n);
   cout<<result<<endl;
   return 0;
}