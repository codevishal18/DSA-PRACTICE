#include<iostream>
using namespace std;

int sumofdigits(int n)
{
    if(n==0) return 0;

    return (n%10) + sumofdigits(n/10);
}

int main()
{
   int n;
   cout<<"enter a number\n";
   cin>> n;

   int result = sumofdigits(n);
   cout<<result<<endl;

   return 0;
}